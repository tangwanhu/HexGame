/********************************************************************************
** Form generated from reading UI file 'aidialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AIDIALOG_H
#define UI_AIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AiDialog
{
public:
    QLabel *label;

    void setupUi(QDialog *AiDialog)
    {
        if (AiDialog->objectName().isEmpty())
            AiDialog->setObjectName(QString::fromUtf8("AiDialog"));
        AiDialog->resize(400, 300);
        label = new QLabel(AiDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 90, 131, 91));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        retranslateUi(AiDialog);

        QMetaObject::connectSlotsByName(AiDialog);
    } // setupUi

    void retranslateUi(QDialog *AiDialog)
    {
        AiDialog->setWindowTitle(QApplication::translate("AiDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("AiDialog", "AI Win!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AiDialog: public Ui_AiDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AIDIALOG_H
