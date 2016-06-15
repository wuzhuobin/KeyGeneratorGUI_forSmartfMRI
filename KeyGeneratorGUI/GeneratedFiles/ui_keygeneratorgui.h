/********************************************************************************
** Form generated from reading UI file 'keygeneratorgui.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYGENERATORGUI_H
#define UI_KEYGENERATORGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KeyGeneratorGUIClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *generatePushButton;
    QLineEdit *licenseLineEdit;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KeyGeneratorGUIClass)
    {
        if (KeyGeneratorGUIClass->objectName().isEmpty())
            KeyGeneratorGUIClass->setObjectName(QStringLiteral("KeyGeneratorGUIClass"));
        KeyGeneratorGUIClass->resize(473, 137);
        centralWidget = new QWidget(KeyGeneratorGUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        generatePushButton = new QPushButton(centralWidget);
        generatePushButton->setObjectName(QStringLiteral("generatePushButton"));

        gridLayout->addWidget(generatePushButton, 1, 1, 1, 1);

        licenseLineEdit = new QLineEdit(centralWidget);
        licenseLineEdit->setObjectName(QStringLiteral("licenseLineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(licenseLineEdit->sizePolicy().hasHeightForWidth());
        licenseLineEdit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(licenseLineEdit, 0, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        KeyGeneratorGUIClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(KeyGeneratorGUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        KeyGeneratorGUIClass->setStatusBar(statusBar);

        retranslateUi(KeyGeneratorGUIClass);

        QMetaObject::connectSlotsByName(KeyGeneratorGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *KeyGeneratorGUIClass)
    {
        KeyGeneratorGUIClass->setWindowTitle(QApplication::translate("KeyGeneratorGUIClass", "KeyGeneratorGUI", 0));
        generatePushButton->setText(QApplication::translate("KeyGeneratorGUIClass", "Generate", 0));
    } // retranslateUi

};

namespace Ui {
    class KeyGeneratorGUIClass: public Ui_KeyGeneratorGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYGENERATORGUI_H
