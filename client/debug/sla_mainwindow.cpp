#include "mainengine.h"
#include "ui_mainengine.h"
#include <QInputDialog>
#include <QMessageBox>

MainEngine::MainEngine(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainEngine)
{
    ui->setupUi(this);

    setAutoFillBackground(true);
    QPalette palette;
    QPixmap pixmap(":/rsc/master.jpg");

    palette.setBrush(QPalette::Window, QBrush(pixmap.scaled(width(), height())));
    setPalette(palette);

//    bool ok = false;
//    authority = QInputDialog::getInt(0, "Authority Choose", "Authorty", 0, 1, 3, 1, &ok);
//    if(ok == false){
//        QMessageBox::warning(0, "Error", "Authority error", QMessageBox::Ok);
//        exit(0);
//    }
    authority = 3;

    isopen = false;
    sendWindTimer = new QTimer(this);
    sendWindTimer->setInterval(2000);//send wind every sec;
    connect(sendWindTimer, &QTimer::timeout, this, &MainEngine::SendWindToSlaveEngine);

    QFile file("D:/learning_souce/course3_term_2/software_engineering/coding/slaver/slave.txt");
    QList<QString> buffer;
    if(file.open(QIODevice::ReadOnly | QIODevice::Text)){
        while(!file.atEnd()){
            QByteArray readl = file.readLine();
            QString line(readl);
            line.replace(QString("\n"),QString(""));
            buffer.push_back(line);
        }
    }
    file.close();

    low_e_change = 1;
    mid_e_change = 2;
    high_e_change = 3;
    qDebug()<<low_e_change;
    qDebug()<<mid_e_change;
    qDebug()<<high_e_change;

    workMode = new QButtonGroup(this);
    workMode->addButton(ui->coldMode, 0);
    workMode->addButton(ui->warmMode, 1);
    connect(workMode, static_cast<void(QButtonGroup::*)(int)>(&QButtonGroup::buttonClicked), this, &MainEngine::OnModeClick);

    connect(ui->onoff, &QPushButton::clicked, this, &MainEngine::OnOffMainEngControl);

    //controller
    datacontroller = new DataControl(this);
    netcontroller = new NetControl(this);

    monitorwindow = new MonitorWindow(&slaveEngineInfo);
    reportwindow = new ReportWindow;
    monitorwindow->setVisible(false);
    reportwindow->setVisible(false);

    //communication drive;
//    connect(netcontroller,&NetControl::SlaveEngStartSignal,this,&MainEngine::SlaveEngStart);
//    connect(netcontroller,&NetControl::SlaveEngStopSignal,this,&MainEngine::SlaveEngStop);
//    connect(netcontroller,&NetControl::SlaveEngRequestWindSignal,this,&MainEngine::SlaveEngRequestWind);
//    connect(netcontroller,&NetControl::SlaveEngStopWindSignal,this,&MainEngine::SlaveEngStopWind);
//    connect(netcontroller,&NetControl::UpdateRoomTempSignal,this,&MainEngine::UpdateRoomTemp);

    connect(netcontroller,SIGNAL(SlaveEngStartSignal(int)),this,SLOT(SlaveEngStart(int)));
    connect(netcontroller,SIGNAL(SlaveEngStopSignal(int)),this,SLOT(SlaveEngStop(int)));
    connect(netcontroller,SIGNAL(SlaveEngRequestWindSignal(int,int,int)),this,SLOT(SlaveEngReques(int,int,int)));
    connect(netcontroller,SIGNAL(SlaveEngStopWindSignal(int)),this,SLOT(SlaveEngStop(int)));
    connect(netcontroller,SIGNAL(UpdateRoomTempSignal(int,int,int)),this,SLOT(UpdateRoomTemp(int,int,int)));

    connect(this, SIGNAL(SpeedDispatchSignal(int)), this, SLOT(SpeedDispatch(int)));


}

MainEngine::~MainEngine()
{
    delete ui;
}
