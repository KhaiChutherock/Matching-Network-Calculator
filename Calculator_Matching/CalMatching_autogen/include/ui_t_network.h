/********************************************************************************
** Form generated from reading UI file 't_network.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_T_NETWORK_H
#define UI_T_NETWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_t_network
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *Rl;
    QLabel *label_9;
    QLineEdit *Rs;
    QLineEdit *Fre;
    QLabel *label_6;
    QComboBox *DCcurrent;
    QLineEdit *Q;
    QLabel *label_5;
    QLabel *circuit;
    QLabel *label;
    QPushButton *calculateButton;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *value3;
    QLabel *Val2;
    QLineEdit *value2;
    QLineEdit *value1;
    QLabel *Val1;
    QLabel *Val3;

    void setupUi(QDialog *t_network)
    {
        if (t_network->objectName().isEmpty())
            t_network->setObjectName("t_network");
        t_network->resize(800, 600);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush4(QColor(255, 255, 220, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(0, 0, 0, 127));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Active, QPalette::Accent, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Accent, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush6(QColor(127, 127, 127, 127));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::Accent, brush1);
        t_network->setPalette(palette);
        gridLayoutWidget = new QWidget(t_network);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(180, 80, 451, 241));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        font.setBold(true);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        Rl = new QLineEdit(gridLayoutWidget);
        Rl->setObjectName("Rl");
        Rl->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(Rl, 2, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        Rs = new QLineEdit(gridLayoutWidget);
        Rs->setObjectName("Rs");
        Rs->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(Rs, 1, 1, 1, 1);

        Fre = new QLineEdit(gridLayoutWidget);
        Fre->setObjectName("Fre");
        Fre->setMaximumSize(QSize(200, 16777215));
        Fre->setFrame(true);

        gridLayout->addWidget(Fre, 0, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        DCcurrent = new QComboBox(gridLayoutWidget);
        DCcurrent->addItem(QString());
        DCcurrent->addItem(QString());
        DCcurrent->setObjectName("DCcurrent");
        DCcurrent->setMaximumSize(QSize(200, 16777215));
        DCcurrent->setMaxVisibleItems(11);

        gridLayout->addWidget(DCcurrent, 4, 1, 1, 1);

        Q = new QLineEdit(gridLayoutWidget);
        Q->setObjectName("Q");
        Q->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(Q, 3, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        circuit = new QLabel(t_network);
        circuit->setObjectName("circuit");
        circuit->setGeometry(QRect(450, 380, 350, 170));
        circuit->setLayoutDirection(Qt::LeftToRight);
        circuit->setPixmap(QPixmap(QString::fromUtf8(":/image/t.jpg")));
        circuit->setScaledContents(true);
        label = new QLabel(t_network);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 10, 580, 60));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(20);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        calculateButton = new QPushButton(t_network);
        calculateButton->setObjectName("calculateButton");
        calculateButton->setGeometry(QRect(340, 340, 120, 40));
        calculateButton->setFlat(false);
        gridLayoutWidget_2 = new QWidget(t_network);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(50, 400, 361, 151));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        value3 = new QLineEdit(gridLayoutWidget_2);
        value3->setObjectName("value3");
        value3->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(value3, 2, 1, 1, 1);

        Val2 = new QLabel(gridLayoutWidget_2);
        Val2->setObjectName("Val2");
        Val2->setFont(font);

        gridLayout_2->addWidget(Val2, 1, 0, 1, 1);

        value2 = new QLineEdit(gridLayoutWidget_2);
        value2->setObjectName("value2");
        value2->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(value2, 1, 1, 1, 1);

        value1 = new QLineEdit(gridLayoutWidget_2);
        value1->setObjectName("value1");
        value1->setMaximumSize(QSize(200, 16777215));
        value1->setFrame(true);

        gridLayout_2->addWidget(value1, 0, 1, 1, 1);

        Val1 = new QLabel(gridLayoutWidget_2);
        Val1->setObjectName("Val1");
        Val1->setFont(font);

        gridLayout_2->addWidget(Val1, 0, 0, 1, 1);

        Val3 = new QLabel(gridLayoutWidget_2);
        Val3->setObjectName("Val3");
        Val3->setFont(font);

        gridLayout_2->addWidget(Val3, 2, 0, 1, 1);


        retranslateUi(t_network);

        calculateButton->setDefault(false);


        QMetaObject::connectSlotsByName(t_network);
    } // setupUi

    void retranslateUi(QDialog *t_network)
    {
        t_network->setWindowTitle(QCoreApplication::translate("t_network", "T-Match", nullptr));
        label_4->setText(QCoreApplication::translate("t_network", "Circuit DC Current (Ohm):", nullptr));
        label_3->setText(QCoreApplication::translate("t_network", "Frequency (MHz):", nullptr));
        label_9->setText(QCoreApplication::translate("t_network", "Source Resistance (Ohm): ", nullptr));
        label_6->setText(QCoreApplication::translate("t_network", "Load Resistance (Ohm):", nullptr));
        DCcurrent->setItemText(0, QCoreApplication::translate("t_network", "DC Feed", nullptr));
        DCcurrent->setItemText(1, QCoreApplication::translate("t_network", "DC Block", nullptr));

        label_5->setText(QCoreApplication::translate("t_network", "Q Factor:", nullptr));
        circuit->setText(QString());
        label->setText(QCoreApplication::translate("t_network", "T-Match Impedance Matching Circuits", nullptr));
        calculateButton->setText(QCoreApplication::translate("t_network", "Calculate", nullptr));
        Val2->setText(QCoreApplication::translate("t_network", "LS (nF):", nullptr));
        Val1->setText(QCoreApplication::translate("t_network", "C (nF):                  ", nullptr));
        Val3->setText(QCoreApplication::translate("t_network", "LL (uH):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class t_network: public Ui_t_network {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_T_NETWORK_H
