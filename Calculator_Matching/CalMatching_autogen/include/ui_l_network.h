/********************************************************************************
** Form generated from reading UI file 'l_network.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_L_NETWORK_H
#define UI_L_NETWORK_H

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

class Ui_l_network
{
public:
    QLabel *circuit;
    QPushButton *calculateButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *Fre;
    QLineEdit *Rs;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_9;
    QLineEdit *Rl;
    QLabel *label_4;
    QComboBox *DCcurrent;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLineEdit *qvalue;
    QLabel *Val2;
    QLabel *Val3;
    QLineEdit *lvalue;
    QLineEdit *cvalue;
    QLabel *Val1;
    QLabel *label;

    void setupUi(QDialog *l_network)
    {
        if (l_network->objectName().isEmpty())
            l_network->setObjectName("l_network");
        l_network->setWindowModality(Qt::NonModal);
        l_network->resize(800, 600);
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
        l_network->setPalette(palette);
        circuit = new QLabel(l_network);
        circuit->setObjectName("circuit");
        circuit->setGeometry(QRect(450, 380, 350, 170));
        circuit->setLayoutDirection(Qt::LeftToRight);
        circuit->setPixmap(QPixmap(QString::fromUtf8(":/image/l_rs.jpg")));
        circuit->setScaledContents(true);
        calculateButton = new QPushButton(l_network);
        calculateButton->setObjectName("calculateButton");
        calculateButton->setGeometry(QRect(340, 350, 120, 40));
        calculateButton->setFlat(false);
        gridLayoutWidget = new QWidget(l_network);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(170, 90, 451, 241));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Fre = new QLineEdit(gridLayoutWidget);
        Fre->setObjectName("Fre");
        Fre->setMaximumSize(QSize(200, 16777215));
        Fre->setFrame(true);

        gridLayout->addWidget(Fre, 0, 1, 1, 1);

        Rs = new QLineEdit(gridLayoutWidget);
        Rs->setObjectName("Rs");
        Rs->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(Rs, 1, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(11);
        font.setBold(true);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName("label_6");
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName("label_9");
        label_9->setFont(font);

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        Rl = new QLineEdit(gridLayoutWidget);
        Rl->setObjectName("Rl");
        Rl->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(Rl, 2, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        DCcurrent = new QComboBox(gridLayoutWidget);
        DCcurrent->addItem(QString());
        DCcurrent->addItem(QString());
        DCcurrent->setObjectName("DCcurrent");
        DCcurrent->setMaximumSize(QSize(200, 16777215));
        DCcurrent->setMaxVisibleItems(11);

        gridLayout->addWidget(DCcurrent, 3, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(l_network);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(50, 400, 361, 151));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        qvalue = new QLineEdit(gridLayoutWidget_2);
        qvalue->setObjectName("qvalue");
        qvalue->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(qvalue, 2, 1, 1, 1);

        Val2 = new QLabel(gridLayoutWidget_2);
        Val2->setObjectName("Val2");
        Val2->setFont(font);

        gridLayout_2->addWidget(Val2, 1, 0, 1, 1);

        Val3 = new QLabel(gridLayoutWidget_2);
        Val3->setObjectName("Val3");
        Val3->setFont(font);

        gridLayout_2->addWidget(Val3, 2, 0, 1, 1);

        lvalue = new QLineEdit(gridLayoutWidget_2);
        lvalue->setObjectName("lvalue");
        lvalue->setMaximumSize(QSize(200, 16777215));
        lvalue->setFrame(true);

        gridLayout_2->addWidget(lvalue, 0, 1, 1, 1);

        cvalue = new QLineEdit(gridLayoutWidget_2);
        cvalue->setObjectName("cvalue");
        cvalue->setMaximumSize(QSize(200, 16777215));

        gridLayout_2->addWidget(cvalue, 1, 1, 1, 1);

        Val1 = new QLabel(gridLayoutWidget_2);
        Val1->setObjectName("Val1");
        Val1->setFont(font);

        gridLayout_2->addWidget(Val1, 0, 0, 1, 1);

        label = new QLabel(l_network);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 10, 580, 60));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(20);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(l_network);

        calculateButton->setDefault(false);


        QMetaObject::connectSlotsByName(l_network);
    } // setupUi

    void retranslateUi(QDialog *l_network)
    {
        l_network->setWindowTitle(QCoreApplication::translate("l_network", "L-Match", nullptr));
        circuit->setText(QString());
        calculateButton->setText(QCoreApplication::translate("l_network", "Calculate", nullptr));
        label_3->setText(QCoreApplication::translate("l_network", "Frequency (MHz):", nullptr));
        label_6->setText(QCoreApplication::translate("l_network", "Load Resistance (Ohm):", nullptr));
        label_9->setText(QCoreApplication::translate("l_network", "Source Resistance (Ohm): ", nullptr));
        label_4->setText(QCoreApplication::translate("l_network", "Circuit DC Current (Ohm):", nullptr));
        DCcurrent->setItemText(0, QCoreApplication::translate("l_network", "DC Feed", nullptr));
        DCcurrent->setItemText(1, QCoreApplication::translate("l_network", "DC Block", nullptr));

        Val2->setText(QCoreApplication::translate("l_network", "C (nF):", nullptr));
        Val3->setText(QCoreApplication::translate("l_network", "Q:", nullptr));
        Val1->setText(QCoreApplication::translate("l_network", "L (uH):                  ", nullptr));
        label->setText(QCoreApplication::translate("l_network", "L-Match Impedance Matching Circuits", nullptr));
    } // retranslateUi

};

namespace Ui {
    class l_network: public Ui_l_network {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_L_NETWORK_H
