/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_speed;
    QAction *action_seed;
    QAction *action_characters_select;
    QAction *aboutcreater_action;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *stop_button;
    QSpacerItem *horizontalSpacer;
    QPushButton *start_button;
    QSpacerItem *horizontalSpacer_5;
    QListWidget *passlist;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QLabel *textlabel;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *linenum_show;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *about;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(595, 400);
        MainWindow->setMinimumSize(QSize(556, 392));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/hp/Desktop/true.jpg"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        action_speed = new QAction(MainWindow);
        action_speed->setObjectName("action_speed");
        action_seed = new QAction(MainWindow);
        action_seed->setObjectName("action_seed");
        action_seed->setCheckable(false);
        QFont font1;
        action_seed->setFont(font1);
        action_seed->setMenuRole(QAction::TextHeuristicRole);
        action_characters_select = new QAction(MainWindow);
        action_characters_select->setObjectName("action_characters_select");
        aboutcreater_action = new QAction(MainWindow);
        aboutcreater_action->setObjectName("aboutcreater_action");
        aboutcreater_action->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 30, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        stop_button = new QPushButton(centralwidget);
        stop_button->setObjectName("stop_button");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stop_button->sizePolicy().hasHeightForWidth());
        stop_button->setSizePolicy(sizePolicy);
        stop_button->setMinimumSize(QSize(107, 89));
        stop_button->setMaximumSize(QSize(160, 133));

        horizontalLayout->addWidget(stop_button);

        horizontalSpacer = new QSpacerItem(40, 30, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        start_button = new QPushButton(centralwidget);
        start_button->setObjectName("start_button");
        start_button->setEnabled(true);
        sizePolicy.setHeightForWidth(start_button->sizePolicy().hasHeightForWidth());
        start_button->setSizePolicy(sizePolicy);
        start_button->setMinimumSize(QSize(107, 89));
        start_button->setMaximumSize(QSize(162, 133));

        horizontalLayout->addWidget(start_button);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        passlist = new QListWidget(centralwidget);
        passlist->setObjectName("passlist");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(passlist->sizePolicy().hasHeightForWidth());
        passlist->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(passlist);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 2);
        horizontalLayout->setStretch(3, 2);

        gridLayout->addLayout(horizontalLayout, 3, 6, 3, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer_2 = new QSpacerItem(20, 25, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);

        verticalLayout_3->addWidget(lineEdit);

        verticalSpacer = new QSpacerItem(20, 25, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_3, 3, 3, 3, 1);

        textlabel = new QLabel(centralwidget);
        textlabel->setObjectName("textlabel");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textlabel->sizePolicy().hasHeightForWidth());
        textlabel->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(textlabel, 3, 4, 3, 2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 2, 3, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 7, 3, 1);

        linenum_show = new QLineEdit(centralwidget);
        linenum_show->setObjectName("linenum_show");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(linenum_show->sizePolicy().hasHeightForWidth());
        linenum_show->setSizePolicy(sizePolicy4);
        linenum_show->setMinimumSize(QSize(551, 232));
        linenum_show->setCursor(QCursor(Qt::CursorShape::ArrowCursor));

        gridLayout->addWidget(linenum_show, 0, 1, 1, 7);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 595, 22));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        about = new QMenu(menubar);
        about->setObjectName("about");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(about->menuAction());
        menu_2->addAction(action_speed);
        menu_2->addAction(action_seed);
        menu_2->addAction(action_characters_select);
        about->addAction(aboutcreater_action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\221\207\345\217\267\346\240\221", nullptr));
        action_speed->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\351\200\237\345\272\246", nullptr));
        action_speed->setIconText(QCoreApplication::translate("MainWindow", "speed", nullptr));
#if QT_CONFIG(tooltip)
        action_speed->setToolTip(QCoreApplication::translate("MainWindow", "speed", nullptr));
#endif // QT_CONFIG(tooltip)
        action_seed->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\347\247\215\345\255\220", nullptr));
        action_seed->setIconText(QCoreApplication::translate("MainWindow", "seed", nullptr));
#if QT_CONFIG(tooltip)
        action_seed->setToolTip(QCoreApplication::translate("MainWindow", "seed", nullptr));
#endif // QT_CONFIG(tooltip)
        action_characters_select->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\345\255\227\344\275\223", nullptr));
        action_characters_select->setIconText(QCoreApplication::translate("MainWindow", "characters_size", nullptr));
#if QT_CONFIG(tooltip)
        action_characters_select->setToolTip(QCoreApplication::translate("MainWindow", "characters_select", nullptr));
#endif // QT_CONFIG(tooltip)
        aboutcreater_action->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216\344\275\234\350\200\205", nullptr));
#if QT_CONFIG(tooltip)
        aboutcreater_action->setToolTip(QCoreApplication::translate("MainWindow", "aboutcreater_action", nullptr));
#endif // QT_CONFIG(tooltip)
        stop_button->setText(QCoreApplication::translate("MainWindow", "\346\232\202\345\201\234", nullptr));
        start_button->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
        textlabel->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt;\">\350\214\203\345\233\264</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        linenum_show->setWhatsThis(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">\346\263\250\346\204\217\357\274\232\350\276\223\345\205\245\350\277\207\345\244\247\347\232\204\346\225\260\345\255\227\345\217\257\350\203\275\344\274\232\351\200\240\346\210\220\347\250\213\345\272\217\345\215\241\351\241\277</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        linenum_show->setText(QString());
        menu->setTitle(QCoreApplication::translate("MainWindow", "\344\270\273\351\241\265", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        about->setTitle(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
