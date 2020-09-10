/********************************************************************************
** Form generated from reading UI file 'mws.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MWS_H
#define UI_MWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MWS
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *MWS)
    {
        if (MWS->objectName().isEmpty())
            MWS->setObjectName(QString::fromUtf8("MWS"));
        MWS->resize(139, 130);
        gridLayout = new QGridLayout(MWS);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(MWS);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        label = new QLabel(MWS);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);


        retranslateUi(MWS);

        QMetaObject::connectSlotsByName(MWS);
    } // setupUi

    void retranslateUi(QWidget *MWS)
    {
        MWS->setWindowTitle(QCoreApplication::translate("MWS", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("MWS", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("MWS", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MWS: public Ui_MWS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MWS_H
