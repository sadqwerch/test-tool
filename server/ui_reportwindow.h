#ifndef UI_REPORTWINDOW_H
#define UI_REPORTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReportWindow
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QGridLayout *gridLayout_5;
    QDateEdit *dateEdit;
    QWidget *page2;
    QGridLayout *gridLayout_4;
    QComboBox *weekEdit;
    QWidget *page3;
    QGridLayout *gridLayout_2;
    QComboBox *monthEdit;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_3;
    QTableWidget *tableWidget;

    void setupUi(QWidget *ReportWindow)
    {
        if (ReportWindow->objectName().isEmpty())
            ReportWindow->setObjectName(QStringLiteral("ReportWindow"));
        ReportWindow->resize(525, 388);
        ReportWindow->setMinimumSize(QSize(525, 388));
        ReportWindow->setMaximumSize(QSize(525, 388));
        gridLayout_3 = new QGridLayout(ReportWindow);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        groupBox = new QGroupBox(ReportWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(10);
        radioButton->setFont(font);

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setFont(font);

        horizontalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setFont(font);

        horizontalLayout->addWidget(radioButton_3);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(groupBox);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(ReportWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(ReportWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setFont(font);

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        stackedWidget = new QStackedWidget(ReportWindow);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page1 = new QWidget();
        page1->setObjectName(QStringLiteral("page1"));
        gridLayout_5 = new QGridLayout(page1);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        dateEdit = new QDateEdit(page1);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setDateTime(QDateTime(QDate(2019, 6, 18), QTime(0, 0, 0)));
        dateEdit->setMaximumDateTime(QDateTime(QDate(2020, 12, 31), QTime(23, 59, 59)));
        dateEdit->setMinimumDateTime(QDateTime(QDate(2019, 1, 1), QTime(0, 0, 0)));

        gridLayout_5->addWidget(dateEdit, 0, 0, 1, 1);

        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName(QStringLiteral("page2"));
        gridLayout_4 = new QGridLayout(page2);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        weekEdit = new QComboBox(page2);
        weekEdit->setObjectName(QStringLiteral("weekEdit"));

        gridLayout_4->addWidget(weekEdit, 0, 0, 1, 1);

        stackedWidget->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName(QStringLiteral("page3"));
        gridLayout_2 = new QGridLayout(page3);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        monthEdit = new QComboBox(page3);
        monthEdit->setObjectName(QStringLiteral("monthEdit"));

        gridLayout_2->addWidget(monthEdit, 0, 0, 1, 1);

        stackedWidget->addWidget(page3);

        horizontalLayout_2->addWidget(stackedWidget);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label = new QLabel(ReportWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        comboBox = new QComboBox(ReportWindow);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        tableWidget = new QTableWidget(ReportWindow);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout_2->addWidget(tableWidget);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(ReportWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(ReportWindow);
    } // setupUi

    void retranslateUi(QWidget *ReportWindow)
    {
        ReportWindow->setWindowTitle(QApplication::translate("ReportWindow", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ReportWindow", "\346\212\245\350\241\250\347\261\273\345\236\213", Q_NULLPTR));
        radioButton->setText(QApplication::translate("ReportWindow", "\346\227\245\346\212\245\350\241\250", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("ReportWindow", "\345\221\250\346\212\245\350\241\250", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("ReportWindow", "\346\234\210\346\212\245\350\241\250", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ReportWindow", "\345\210\267\346\226\260", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ReportWindow", "\346\270\205\347\251\272\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        weekEdit->clear();
        weekEdit->insertItems(0, QStringList()
         << QApplication::translate("ReportWindow", "\347\254\2541\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\2542\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\2543\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\2544\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\2545\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\2546\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\2547\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\2548\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\2549\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25410\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25411\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25412\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25413\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25414\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25415\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25416\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25417\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25418\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25419\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25420\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25421\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25422\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25423\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25424\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25425\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25426\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25427\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25428\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25429\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25430\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25431\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25432\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25433\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25434\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25435\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25436\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25437\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25438\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25439\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25440\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25441\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25442\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25443\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25444\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25445\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25446\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25447\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25448\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25449\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25450\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25451\345\221\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\347\254\25452\345\221\250", Q_NULLPTR)
        );
        monthEdit->clear();
        monthEdit->insertItems(0, QStringList()
         << QApplication::translate("ReportWindow", "\344\270\200\346\234\210", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\344\272\214\346\234\210", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\344\270\211\346\234\210", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\345\233\233\346\234\210", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\344\272\224\346\234\210", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\345\205\255\346\234\210", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\344\270\203\346\234\210", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\345\205\253\346\234\210", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\344\271\235\346\234\210", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\345\215\201\346\234\210", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\345\215\201\344\270\200\346\234\210", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "\345\215\201\344\272\214\346\234\210", Q_NULLPTR)
        );
        label->setText(QApplication::translate("ReportWindow", "\346\210\277\351\227\264\345\217\267\357\274\232", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ReportWindow", "\345\205\250\351\203\250", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "0", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "1", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "2", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "3", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "4", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "5", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "6", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "7", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "8", Q_NULLPTR)
         << QApplication::translate("ReportWindow", "9", Q_NULLPTR)
        );
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ReportWindow", "\346\210\277\351\227\264\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ReportWindow", "\345\274\200\345\205\263\346\234\272\346\254\241\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ReportWindow", "\346\270\251\346\216\247\346\254\241\346\225\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ReportWindow", "\350\264\271\347\224\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ReportWindow: public Ui_ReportWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTWINDOW_H
