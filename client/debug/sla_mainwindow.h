#ifndef MAINENGINE_H
#define MAINENGINE_H

#include <QMainWindow>
#include "datacontrol.h"
#include "netcontrol.h"
#include "reportwindow.h"
#include "monitorwindow.h"
#include "datastruct.h"
#include <common.h>

namespace Ui {
class MainEngine;
}

class MainEngine : public QMainWindow
{
    Q_OBJECT

signals:
    void SpeedDispatchSignal(int roomid);

public:
    QMap<int, SingleEngInfo> slaveEngineInfo;

    int authority;
    void setAuthority();

    explicit MainEngine(QWidget *parent = 0);
    ~MainEngine();

public slots:
    void OnModeClick(int id);
    void SlaveEngStart(int roomid);
    void SlaveEngStop(int roomid);
    void SlaveEngRequestWind(int roomid, int tar_t, int spped);
    void SlaveEngStopWind(int roomid);
    void SpeedDispatch(int roomid);
    void UpdateRoomTemp(int roomid,int roomtemp,int windspeed);
    void OnOffMainEngControl();

private:
    Ui::MainEngine *ui;

    int init_t;

    double low_e_change;
    double mid_e_change;
    double high_e_change;

    QButtonGroup *workMode;
    QTimer *sendWindTimer;

    DataControl *datacontroller;
    NetControl *netcontroller;
    ReportWindow *reportwindow;
    MonitorWindow *monitorwindow;

    bool isopen;
    bool mode;
    QList<int> serveingList;//the room that receving wind;
    QList<int> waitingList;//need serve but don't have resourse;

    void OpenMainEngine();
    void CloseMainEngine();

private slots:
    void SetMonitorVisible();//show monitor window;
    void SetReportVisible();//show report window;
    void SendWindToSlaveEngine();

};

#endif // MAINENGINE_H
