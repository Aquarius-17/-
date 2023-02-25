/********************************************************************************
** Form generated from reading UI file 'QtWidgetsApplication.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTWIDGETSAPPLICATION_H
#define UI_QTWIDGETSAPPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtWidgetsApplicationClass
{
public:

    void setupUi(QWidget *QtWidgetsApplicationClass)
    {
        if (QtWidgetsApplicationClass->objectName().isEmpty())
            QtWidgetsApplicationClass->setObjectName(QString::fromUtf8("QtWidgetsApplicationClass"));
        QtWidgetsApplicationClass->resize(600, 400);

        retranslateUi(QtWidgetsApplicationClass);

        QMetaObject::connectSlotsByName(QtWidgetsApplicationClass);
    } // setupUi

    void retranslateUi(QWidget *QtWidgetsApplicationClass)
    {
        QtWidgetsApplicationClass->setWindowTitle(QApplication::translate("QtWidgetsApplicationClass", "QtWidgetsApplication", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtWidgetsApplicationClass: public Ui_QtWidgetsApplicationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTWIDGETSAPPLICATION_H
