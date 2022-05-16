/********************************************************************************
** Form generated from reading UI file 'slaveengine.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLAVEENGINE_H
#define UI_SLAVEENGINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_SlaveEngine
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *room_num;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_8;
    QLabel *slave_state;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *OF_button;
    QPushButton *close_connect;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *cur_t;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *slave_model;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_7;
    QLabel *tar_t;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_3;
    QPushButton *t_add;
    QPushButton *t_min;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *lowspeed;
    QPushButton *midspeed;
    QPushButton *highspeed;
    QSpacerItem *horizontalSpacer_7;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_6;
    QLabel *speed;
    QSpacerItem *horizontalSpacer_15;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_10;
    QLabel *fee;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_13;
    QLabel *energy_cost;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_11;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SlaveEngine)
    {
        if (SlaveEngine->objectName().isEmpty())
            SlaveEngine->setObjectName(QStringLiteral("SlaveEngine"));
        SlaveEngine->resize(664, 526);
        SlaveEngine->setMinimumSize(QSize(664, 526));
        SlaveEngine->setMaximumSize(QSize(664, 526));
        centralWidget = new QWidget(SlaveEngine);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(664, 457));
        centralWidget->setMaximumSize(QSize(664, 457));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 641, 431));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(180, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(24);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(180, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(14);
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        room_num = new QLabel(widget);
        room_num->setObjectName(QStringLiteral("room_num"));
        room_num->setFont(font1);

        horizontalLayout_2->addWidget(room_num);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_13);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        horizontalLayout_2->addWidget(label_8);

        slave_state = new QLabel(widget);
        slave_state->setObjectName(QStringLiteral("slave_state"));
        slave_state->setFont(font1);

        horizontalLayout_2->addWidget(slave_state);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_12);

        OF_button = new QPushButton(widget);
        OF_button->setObjectName(QStringLiteral("OF_button"));
        OF_button->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(OF_button);

        close_connect = new QPushButton(widget);
        close_connect->setObjectName(QStringLiteral("close_connect"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        close_connect->setFont(font2);

        horizontalLayout_2->addWidget(close_connect);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(10);
        label_2->setFont(font3);

        horizontalLayout_3->addWidget(label_2);

        cur_t = new QLabel(widget);
        cur_t->setObjectName(QStringLiteral("cur_t"));
        cur_t->setFont(font3);

        horizontalLayout_3->addWidget(cur_t);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font4;
        font4.setPointSize(10);
        label_4->setFont(font4);

        horizontalLayout_3->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font3);

        horizontalLayout_4->addWidget(label_5);

        slave_model = new QLabel(widget);
        slave_model->setObjectName(QStringLiteral("slave_model"));
        slave_model->setFont(font3);

        horizontalLayout_4->addWidget(slave_model);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_6->addLayout(verticalLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        horizontalLayout_5->addWidget(label_7);

        tar_t = new QLabel(widget);
        tar_t->setObjectName(QStringLiteral("tar_t"));
        tar_t->setFont(font1);

        horizontalLayout_5->addWidget(tar_t);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font1);

        horizontalLayout_5->addWidget(label_9);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        t_add = new QPushButton(widget);
        t_add->setObjectName(QStringLiteral("t_add"));
        t_add->setEnabled(false);

        verticalLayout_3->addWidget(t_add);

        t_min = new QPushButton(widget);
        t_min->setObjectName(QStringLiteral("t_min"));
        t_min->setEnabled(false);

        verticalLayout_3->addWidget(t_min);


        horizontalLayout_5->addLayout(verticalLayout_3);


        horizontalLayout_6->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        lowspeed = new QPushButton(widget);
        lowspeed->setObjectName(QStringLiteral("lowspeed"));
        lowspeed->setEnabled(false);

        horizontalLayout_7->addWidget(lowspeed);

        midspeed = new QPushButton(widget);
        midspeed->setObjectName(QStringLiteral("midspeed"));
        midspeed->setEnabled(false);
        midspeed->setFont(font3);

        horizontalLayout_7->addWidget(midspeed);

        highspeed = new QPushButton(widget);
        highspeed->setObjectName(QStringLiteral("highspeed"));
        highspeed->setEnabled(false);

        horizontalLayout_7->addWidget(highspeed);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_14);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font3);

        horizontalLayout_10->addWidget(label_6);

        speed = new QLabel(widget);
        speed->setObjectName(QStringLiteral("speed"));
        speed->setFont(font3);

        horizontalLayout_10->addWidget(speed);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_15);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font3);

        horizontalLayout_8->addWidget(label_10);

        fee = new QLabel(widget);
        fee->setObjectName(QStringLiteral("fee"));
        fee->setFont(font3);

        horizontalLayout_8->addWidget(fee);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font3);

        horizontalLayout_8->addWidget(label_12);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_10);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setFont(font3);

        horizontalLayout_9->addWidget(label_13);

        energy_cost = new QLabel(widget);
        energy_cost->setObjectName(QStringLiteral("energy_cost"));
        energy_cost->setFont(font3);

        horizontalLayout_9->addWidget(energy_cost);

        label_15 = new QLabel(widget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setFont(font3);

        horizontalLayout_9->addWidget(label_15);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_11);


        verticalLayout_2->addLayout(horizontalLayout_9);

        SlaveEngine->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SlaveEngine);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 664, 25));
        SlaveEngine->setMenuBar(menuBar);
        mainToolBar = new QToolBar(SlaveEngine);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        SlaveEngine->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SlaveEngine);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SlaveEngine->setStatusBar(statusBar);

        retranslateUi(SlaveEngine);

        QMetaObject::connectSlotsByName(SlaveEngine);
    } // setupUi

    void retranslateUi(QMainWindow *SlaveEngine)
    {
        SlaveEngine->setWindowTitle(QApplication::translate("SlaveEngine", "SlaveEngine", Q_NULLPTR));
        label->setText(QApplication::translate("SlaveEngine", "\347\251\272\350\260\203\344\273\216\346\216\247\347\263\273\347\273\237", Q_NULLPTR));
        label_3->setText(QApplication::translate("SlaveEngine", "\346\210\277\351\227\264\345\217\267\357\274\232", Q_NULLPTR));
        room_num->setText(QApplication::translate("SlaveEngine", "--", Q_NULLPTR));
        label_8->setText(QApplication::translate("SlaveEngine", "\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        slave_state->setText(QApplication::translate("SlaveEngine", "\345\205\263\346\234\272", Q_NULLPTR));
        OF_button->setText(QApplication::translate("SlaveEngine", "\345\274\200/\345\205\263\346\234\272", Q_NULLPTR));
        close_connect->setText(QApplication::translate("SlaveEngine", "\351\200\200\346\210\277", Q_NULLPTR));
        label_2->setText(QApplication::translate("SlaveEngine", "\345\275\223\345\211\215\346\270\251\345\272\246\357\274\232", Q_NULLPTR));
        cur_t->setText(QApplication::translate("SlaveEngine", "----", Q_NULLPTR));
        label_4->setText(QApplication::translate("SlaveEngine", "\342\204\203", Q_NULLPTR));
        label_5->setText(QApplication::translate("SlaveEngine", "\346\250\241\345\274\217\357\274\232", Q_NULLPTR));
        slave_model->setText(QApplication::translate("SlaveEngine", "----", Q_NULLPTR));
        label_7->setText(QApplication::translate("SlaveEngine", "\347\233\256\346\240\207\346\270\251\345\272\246\357\274\232", Q_NULLPTR));
        tar_t->setText(QApplication::translate("SlaveEngine", "--", Q_NULLPTR));
        label_9->setText(QApplication::translate("SlaveEngine", "\342\204\203", Q_NULLPTR));
        t_add->setText(QApplication::translate("SlaveEngine", "+", Q_NULLPTR));
        t_min->setText(QApplication::translate("SlaveEngine", "-", Q_NULLPTR));
        lowspeed->setText(QApplication::translate("SlaveEngine", "\344\275\216\351\243\216", Q_NULLPTR));
        midspeed->setText(QApplication::translate("SlaveEngine", "\344\270\255\351\243\216", Q_NULLPTR));
        highspeed->setText(QApplication::translate("SlaveEngine", "\351\253\230\351\243\216", Q_NULLPTR));
        label_6->setText(QApplication::translate("SlaveEngine", "\351\243\216\351\200\237\357\274\232", Q_NULLPTR));
        speed->setText(QApplication::translate("SlaveEngine", "----", Q_NULLPTR));
        label_10->setText(QApplication::translate("SlaveEngine", "\345\267\262\347\224\250\350\264\271\347\224\250\357\274\232", Q_NULLPTR));
        fee->setText(QApplication::translate("SlaveEngine", "--", Q_NULLPTR));
        label_12->setText(QApplication::translate("SlaveEngine", "\345\205\203", Q_NULLPTR));
        label_13->setText(QApplication::translate("SlaveEngine", "\345\267\262\347\224\250\350\203\275\351\207\217\357\274\232", Q_NULLPTR));
        energy_cost->setText(QApplication::translate("SlaveEngine", "--", Q_NULLPTR));
        label_15->setText(QApplication::translate("SlaveEngine", "J", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SlaveEngine: public Ui_SlaveEngine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLAVEENGINE_H
