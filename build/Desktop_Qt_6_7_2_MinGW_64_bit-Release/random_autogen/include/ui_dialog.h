/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *button_Box;
    QLabel *label_2;
    QLineEdit *seed_Edit;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(216, 100);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog->sizePolicy().hasHeightForWidth());
        Dialog->setSizePolicy(sizePolicy);
        Dialog->setMinimumSize(QSize(216, 100));
        Dialog->setMaximumSize(QSize(216, 100));
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName("gridLayout");
        button_Box = new QDialogButtonBox(Dialog);
        button_Box->setObjectName("button_Box");
        button_Box->setOrientation(Qt::Horizontal);
        button_Box->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(button_Box, 2, 1, 1, 1);

        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        seed_Edit = new QLineEdit(Dialog);
        seed_Edit->setObjectName("seed_Edit");

        gridLayout->addWidget(seed_Edit, 1, 1, 1, 2);


        retranslateUi(Dialog);
        QObject::connect(button_Box, &QDialogButtonBox::accepted, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(button_Box, &QDialogButtonBox::rejected, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QString());
        label_2->setText(QCoreApplication::translate("Dialog", "<html><head/><body><p><span style=\" font-size:10pt;\">\347\247\215\345\255\220</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
