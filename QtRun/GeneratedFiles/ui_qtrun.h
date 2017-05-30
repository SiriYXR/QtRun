/********************************************************************************
** Form generated from reading UI file 'qtrun.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTRUN_H
#define UI_QTRUN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtRunClass
{
public:

    void setupUi(QWidget *QtRunClass)
    {
        if (QtRunClass->objectName().isEmpty())
            QtRunClass->setObjectName(QStringLiteral("QtRunClass"));
        QtRunClass->resize(600, 400);

        retranslateUi(QtRunClass);

        QMetaObject::connectSlotsByName(QtRunClass);
    } // setupUi

    void retranslateUi(QWidget *QtRunClass)
    {
        QtRunClass->setWindowTitle(QApplication::translate("QtRunClass", "QtRun", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtRunClass: public Ui_QtRunClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTRUN_H
