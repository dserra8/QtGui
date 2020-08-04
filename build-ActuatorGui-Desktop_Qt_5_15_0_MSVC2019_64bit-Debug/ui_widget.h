/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout_3;
    QPushButton *btn_clear;
    QCheckBox *checkBox;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QCustomPlot *plot;
    QFormLayout *formLayout_4;
    QSpacerItem *verticalSpacer_5;
    QComboBox *comboBox;
    QCheckBox *checkBox_2;
    QSpacerItem *verticalSpacer_10;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_8;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_9;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_11;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *parameter2SpinBox;
    QDoubleSpinBox *parameter1SpinBox;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *updateButton;
    QPushButton *zeroButton;
    QSpacerItem *verticalSpacer_7;
    QFormLayout *formLayout_2;
    QLabel *label_9;
    QLineEdit *filename;
    QLabel *label_10;
    QTextEdit *comment;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(684, 712);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(0, 255, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush3);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        QBrush brush5(QColor(255, 255, 255, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        QBrush brush6(QColor(255, 255, 255, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        Widget->setPalette(palette);
        Widget->setAutoFillBackground(false);
        Widget->setStyleSheet(QString::fromUtf8(" font:bold; color:white"));
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        btn_clear = new QPushButton(Widget);
        btn_clear->setObjectName(QString::fromUtf8("btn_clear"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_clear->sizePolicy().hasHeightForWidth());
        btn_clear->setSizePolicy(sizePolicy);
        btn_clear->setMinimumSize(QSize(80, 21));
        btn_clear->setMaximumSize(QSize(80, 21));
        btn_clear->setStyleSheet(QString::fromUtf8("font:bold"));
        btn_clear->setFlat(true);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, btn_clear);

        checkBox = new QCheckBox(Widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        sizePolicy.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy);
        checkBox->setMinimumSize(QSize(80, 19));
        checkBox->setMaximumSize(QSize(80, 19));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, checkBox);

        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(80, 13));
        label->setMaximumSize(QSize(80, 13));

        formLayout_3->setWidget(6, QFormLayout::FieldRole, label);

        spinBox = new QSpinBox(Widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        sizePolicy.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy);
        spinBox->setMinimumSize(QSize(80, 23));
        spinBox->setMaximumSize(QSize(80, 23));
        spinBox->setStyleSheet(QString::fromUtf8("color:black"));

        formLayout_3->setWidget(7, QFormLayout::FieldRole, spinBox);

        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_3->setItem(1, QFormLayout::FieldRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_3->setItem(3, QFormLayout::FieldRole, verticalSpacer_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_3->setItem(5, QFormLayout::FieldRole, verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_3->setItem(8, QFormLayout::FieldRole, verticalSpacer_4);


        horizontalLayout->addLayout(formLayout_3);

        plot = new QCustomPlot(Widget);
        plot->setObjectName(QString::fromUtf8("plot"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(plot->sizePolicy().hasHeightForWidth());
        plot->setSizePolicy(sizePolicy1);
        plot->setMinimumSize(QSize(481, 291));
        plot->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(plot);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        verticalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(0, QFormLayout::LabelRole, verticalSpacer_5);

        comboBox = new QComboBox(Widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMaximumSize(QSize(99, 22));
        comboBox->setAcceptDrops(false);
        comboBox->setAutoFillBackground(false);
        comboBox->setStyleSheet(QString::fromUtf8("background:black"));

        formLayout_4->setWidget(1, QFormLayout::SpanningRole, comboBox);

        checkBox_2 = new QCheckBox(Widget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        sizePolicy.setHeightForWidth(checkBox_2->sizePolicy().hasHeightForWidth());
        checkBox_2->setSizePolicy(sizePolicy);
        checkBox_2->setMaximumSize(QSize(99, 19));

        formLayout_4->setWidget(2, QFormLayout::SpanningRole, checkBox_2);

        verticalSpacer_10 = new QSpacerItem(17, 50, QSizePolicy::Minimum, QSizePolicy::Preferred);

        formLayout_4->setItem(3, QFormLayout::SpanningRole, verticalSpacer_10);

        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setMaximumSize(QSize(99, 21));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush7(QColor(255, 85, 0, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush9(QColor(255, 255, 255, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QBrush brush10(QColor(255, 255, 255, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        pushButton_2->setPalette(palette1);
        pushButton_2->setFlat(true);

        formLayout_4->setWidget(4, QFormLayout::SpanningRole, pushButton_2);

        verticalSpacer_8 = new QSpacerItem(17, 50, QSizePolicy::Minimum, QSizePolicy::Preferred);

        formLayout_4->setItem(5, QFormLayout::SpanningRole, verticalSpacer_8);

        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setMaximumSize(QSize(99, 21));
        pushButton_3->setFlat(true);

        formLayout_4->setWidget(6, QFormLayout::SpanningRole, pushButton_3);

        verticalSpacer_9 = new QSpacerItem(17, 50, QSizePolicy::Minimum, QSizePolicy::Preferred);

        formLayout_4->setItem(7, QFormLayout::SpanningRole, verticalSpacer_9);

        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setMaximumSize(QSize(99, 21));
        pushButton_4->setFlat(true);

        formLayout_4->setWidget(9, QFormLayout::SpanningRole, pushButton_4);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout_4->setItem(10, QFormLayout::LabelRole, verticalSpacer_6);


        horizontalLayout->addLayout(formLayout_4);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_11 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_11);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        parameter2SpinBox = new QDoubleSpinBox(Widget);
        parameter2SpinBox->setObjectName(QString::fromUtf8("parameter2SpinBox"));
        sizePolicy.setHeightForWidth(parameter2SpinBox->sizePolicy().hasHeightForWidth());
        parameter2SpinBox->setSizePolicy(sizePolicy);
        parameter2SpinBox->setStyleSheet(QString::fromUtf8("color:black"));

        gridLayout->addWidget(parameter2SpinBox, 2, 4, 1, 1);

        parameter1SpinBox = new QDoubleSpinBox(Widget);
        parameter1SpinBox->setObjectName(QString::fromUtf8("parameter1SpinBox"));
        sizePolicy.setHeightForWidth(parameter1SpinBox->sizePolicy().hasHeightForWidth());
        parameter1SpinBox->setSizePolicy(sizePolicy);
        parameter1SpinBox->setAutoFillBackground(true);
        parameter1SpinBox->setStyleSheet(QString::fromUtf8("color:black"));
        parameter1SpinBox->setButtonSymbols(QAbstractSpinBox::PlusMinus);

        gridLayout->addWidget(parameter1SpinBox, 2, 2, 1, 1);

        label_7 = new QLabel(Widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 5, 1, 1);

        updateButton = new QPushButton(Widget);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        sizePolicy.setHeightForWidth(updateButton->sizePolicy().hasHeightForWidth());
        updateButton->setSizePolicy(sizePolicy);
        QPalette palette2;
        QBrush brush11(QColor(0, 128, 0, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush11);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush11);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
        QBrush brush12(QColor(0, 128, 0, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush12);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush11);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        QBrush brush13(QColor(0, 128, 0, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush13);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        QBrush brush14(QColor(0, 128, 0, 128));
        brush14.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush14);
#endif
        updateButton->setPalette(palette2);
        updateButton->setMouseTracking(true);
        updateButton->setAcceptDrops(false);
        updateButton->setAutoFillBackground(false);
        updateButton->setStyleSheet(QString::fromUtf8("background:black; \n"
"color:green; \n"
"\n"
""));
        updateButton->setCheckable(false);
        updateButton->setFlat(true);

        gridLayout->addWidget(updateButton, 3, 1, 1, 2);

        zeroButton = new QPushButton(Widget);
        zeroButton->setObjectName(QString::fromUtf8("zeroButton"));
        sizePolicy.setHeightForWidth(zeroButton->sizePolicy().hasHeightForWidth());
        zeroButton->setSizePolicy(sizePolicy);
        zeroButton->setStyleSheet(QString::fromUtf8("font:bold; color:red"));
        zeroButton->setAutoDefault(true);
        zeroButton->setFlat(true);

        gridLayout->addWidget(zeroButton, 3, 3, 1, 2);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_7 = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout->addItem(verticalSpacer_7);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_9 = new QLabel(Widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_9);

        filename = new QLineEdit(Widget);
        filename->setObjectName(QString::fromUtf8("filename"));
        sizePolicy.setHeightForWidth(filename->sizePolicy().hasHeightForWidth());
        filename->setSizePolicy(sizePolicy);
        filename->setStyleSheet(QString::fromUtf8("color:black"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, filename);

        label_10 = new QLabel(Widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_10);

        comment = new QTextEdit(Widget);
        comment->setObjectName(QString::fromUtf8("comment"));
        sizePolicy.setHeightForWidth(comment->sizePolicy().hasHeightForWidth());
        comment->setSizePolicy(sizePolicy);
        comment->setStyleSheet(QString::fromUtf8("color:black"));
        comment->setFrameShadow(QFrame::Raised);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, comment);


        verticalLayout->addLayout(formLayout_2);

#if QT_CONFIG(shortcut)
        label->setBuddy(spinBox);
        label_5->setBuddy(parameter1SpinBox);
        label_7->setBuddy(parameter2SpinBox);
        label_9->setBuddy(filename);
        label_10->setBuddy(comment);
#endif // QT_CONFIG(shortcut)

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        btn_clear->setText(QCoreApplication::translate("Widget", "Clear Graph", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "Hold Plot", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Data Display", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Widget", "UDP", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Widget", "TCP", nullptr));

        checkBox_2->setText(QCoreApplication::translate("Widget", "Connect", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "Option 1", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "Option 2", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Widget", "Option 3", nullptr));
        label_5->setText(QCoreApplication::translate("Widget", "Parameter 1", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "Paramter 2", nullptr));
        updateButton->setText(QCoreApplication::translate("Widget", "Update", nullptr));
        zeroButton->setText(QCoreApplication::translate("Widget", "Zero Values", nullptr));
        label_9->setText(QCoreApplication::translate("Widget", "Name", nullptr));
        label_10->setText(QCoreApplication::translate("Widget", "Comment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
