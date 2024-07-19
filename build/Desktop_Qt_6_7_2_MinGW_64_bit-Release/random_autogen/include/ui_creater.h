/********************************************************************************
** Form generated from reading UI file 'creater.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATER_H
#define UI_CREATER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_creater
{
public:
    QGridLayout *gridLayout;
    QLabel *picture;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *gamestart;

    void setupUi(QDialog *creater)
    {
        if (creater->objectName().isEmpty())
            creater->setObjectName("creater");
        creater->resize(244, 127);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(creater->sizePolicy().hasHeightForWidth());
        creater->setSizePolicy(sizePolicy);
        creater->setAutoFillBackground(false);
        creater->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(creater);
        gridLayout->setObjectName("gridLayout");
        picture = new QLabel(creater);
        picture->setObjectName("picture");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(32);
        sizePolicy1.setVerticalStretch(32);
        sizePolicy1.setHeightForWidth(picture->sizePolicy().hasHeightForWidth());
        picture->setSizePolicy(sizePolicy1);
        picture->setMinimumSize(QSize(32, 32));
        picture->setMaximumSize(QSize(32, 32));
        picture->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        picture->setMouseTracking(false);
        picture->setStyleSheet(QString::fromUtf8("border-image: url(:/creater.ico);"));

        gridLayout->addWidget(picture, 0, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(creater);
        label->setObjectName("label");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(creater);
        label_2->setObjectName("label_2");
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(creater);
        label_3->setObjectName("label_3");
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(label_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 3, 1);

        gamestart = new QPushButton(creater);
        gamestart->setObjectName("gamestart");
        sizePolicy.setHeightForWidth(gamestart->sizePolicy().hasHeightForWidth());
        gamestart->setSizePolicy(sizePolicy);
        gamestart->setMaximumSize(QSize(5, 5));

        gridLayout->addWidget(gamestart, 2, 2, 1, 1, Qt::AlignRight|Qt::AlignBottom);


        retranslateUi(creater);

        QMetaObject::connectSlotsByName(creater);
    } // setupUi

    void retranslateUi(QDialog *creater)
    {
        creater->setWindowTitle(QCoreApplication::translate("creater", "\345\205\263\344\272\216\344\275\234\350\200\205", nullptr));
        picture->setText(QString());
        label->setText(QCoreApplication::translate("creater", "\344\275\234\350\200\205\357\274\232Wesp Wheat", nullptr));
        label_2->setText(QCoreApplication::translate("creater", "<html><head/><body><p>Github\344\270\273\351\241\265\357\274\232<a href=\"https://github.com/xiaomaitangjiang\"><span style=\" text-decoration: underline; color:#0078d7;\">\342\200\234\351\272\246\345\223\262\344\274\246\342\200\235\347\232\204\344\270\273\351\241\265</span></a></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("creater", "\344\275\277\347\224\250\346\241\206\346\236\266\357\274\232QT", nullptr));
        gamestart->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class creater: public Ui_creater {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATER_H
