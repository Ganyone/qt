/********************************************************************************
** Form generated from reading UI file 'text.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXT_H
#define UI_TEXT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_text
{
public:

    void setupUi(QDialog *text)
    {
        if (text->objectName().isEmpty())
            text->setObjectName(QStringLiteral("text"));
        text->resize(400, 300);

        retranslateUi(text);

        QMetaObject::connectSlotsByName(text);
    } // setupUi

    void retranslateUi(QDialog *text)
    {
        text->setWindowTitle(QApplication::translate("text", "text", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class text: public Ui_text {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXT_H
