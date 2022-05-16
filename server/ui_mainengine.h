#ifndef UI_MAINENGINE_H
#define UI_MAINENGINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainEngine
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *mainState;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *onoff;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QLabel *cur_mode;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *coldMode;
    QPushButton *warmMode;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *monitor;
    QPushButton *report;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainEngine)
    {
        if (MainEngine->objectName().isEmpty())
            MainEngine->setObjectName(QStringLiteral("MainEngine"));
        MainEngine->resize(540, 411);
        centralWidget = new QWidget(MainEngine);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(14);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        mainState = new QLabel(centralWidget);
        mainState->setObjectName(QStringLiteral("mainState"));
        mainState->setFont(font);

        horizontalLayout->addWidget(mainState);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        onoff = new QPushButton(centralWidget);
        onoff->setObjectName(QStringLiteral("onoff"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(10);
        onoff->setFont(font1);

        horizontalLayout->addWidget(onoff);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        cur_mode = new QLabel(centralWidget);
        cur_mode->setObjectName(QStringLiteral("cur_mode"));
        cur_mode->setFont(font1);

        horizontalLayout_2->addWidget(cur_mode);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        coldMode = new QPushButton(centralWidget);
        coldMode->setObjectName(QStringLiteral("coldMode"));
        coldMode->setEnabled(false);
        coldMode->setFont(font1);

        horizontalLayout_3->addWidget(coldMode);

        warmMode = new QPushButton(centralWidget);
        warmMode->setObjectName(QStringLiteral("warmMode"));
        warmMode->setEnabled(false);
        warmMode->setFont(font1);

        horizontalLayout_3->addWidget(warmMode);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        monitor = new QPushButton(centralWidget);
        monitor->setObjectName(QStringLiteral("monitor"));
        monitor->setEnabled(false);
        monitor->setFont(font1);

        horizontalLayout_4->addWidget(monitor);

        report = new QPushButton(centralWidget);
        report->setObjectName(QStringLiteral("report"));
        report->setEnabled(false);
        report->setFont(font1);

        horizontalLayout_4->addWidget(report);


        verticalLayout->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainEngine->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainEngine);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 540, 25));
        MainEngine->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainEngine);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainEngine->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainEngine);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainEngine->setStatusBar(statusBar);

        retranslateUi(MainEngine);

        QMetaObject::connectSlotsByName(MainEngine);
    } // setupUi

    void retranslateUi(QMainWindow *MainEngine)
    {
        MainEngine->setWindowTitle(QApplication::translate("MainEngine", "MainEngine", Q_NULLPTR));
        label->setText(QApplication::translate("MainEngine", "\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        mainState->setText(QApplication::translate("MainEngine", "\345\205\263\346\234\272", Q_NULLPTR));
        onoff->setText(QApplication::translate("MainEngine", "\345\274\200/\345\205\263\346\234\272", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainEngine", "\346\250\241\345\274\217\357\274\232", Q_NULLPTR));
        cur_mode->setText(QApplication::translate("MainEngine", "--", Q_NULLPTR));
        coldMode->setText(QApplication::translate("MainEngine", "\345\210\266\345\206\267", Q_NULLPTR));
        warmMode->setText(QApplication::translate("MainEngine", "\345\210\266\347\203\255", Q_NULLPTR));
        monitor->setText(QApplication::translate("MainEngine", "\347\233\221\350\247\206\345\231\250", Q_NULLPTR));
        report->setText(QApplication::translate("MainEngine", "\346\212\245\350\241\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainEngine: public Ui_MainEngine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINENGINE_H
