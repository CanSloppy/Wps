/********************************************************************************
** Form generated from reading UI file 'formdoc.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMDOC_H
#define UI_FORMDOC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormDoc
{
public:
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEdit;

    void setupUi(QWidget *FormDoc)
    {
        if (FormDoc->objectName().isEmpty())
            FormDoc->setObjectName(QString::fromUtf8("FormDoc"));
        FormDoc->resize(400, 300);
        horizontalLayout = new QHBoxLayout(FormDoc);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(FormDoc);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout->addWidget(textEdit);


        retranslateUi(FormDoc);

        QMetaObject::connectSlotsByName(FormDoc);
    } // setupUi

    void retranslateUi(QWidget *FormDoc)
    {
        FormDoc->setWindowTitle(QCoreApplication::translate("FormDoc", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormDoc: public Ui_FormDoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMDOC_H
