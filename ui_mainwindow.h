/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *action_SaveAt;
    QAction *actionPrint;
    QAction *actionPreview;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaset;
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionUnderline;
    QAction *actionColor;
    QAction *actionLeft;
    QAction *actionCenter;
    QAction *actionRight;
    QAction *actionJustify;
    QAction *actionClose;
    QAction *actionCloseAll;
    QAction *actionTile;
    QAction *actioncasade;
    QAction *actionNext;
    QAction *actionBefore;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxFontStyle;
    QFontComboBox *fontComboBox;
    QComboBox *comboBoxPointSize;
    QSpacerItem *horizontalSpacer;
    QMdiArea *mdiArea;
    QMenuBar *menubar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_O;
    QMenu *menu_D;
    QMenu *menu_2;
    QMenu *menu_W;
    QMenu *menu;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        action_SaveAt = new QAction(MainWindow);
        action_SaveAt->setObjectName(QString::fromUtf8("action_SaveAt"));
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon3);
        actionPreview = new QAction(MainWindow);
        actionPreview->setObjectName(QString::fromUtf8("actionPreview"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon4);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon5);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon6);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon7);
        actionPaset = new QAction(MainWindow);
        actionPaset->setObjectName(QString::fromUtf8("actionPaset"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaset->setIcon(icon8);
        actionBold = new QAction(MainWindow);
        actionBold->setObjectName(QString::fromUtf8("actionBold"));
        actionBold->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/bold.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon9);
        actionItalic = new QAction(MainWindow);
        actionItalic->setObjectName(QString::fromUtf8("actionItalic"));
        actionItalic->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/italic.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon10);
        actionUnderline = new QAction(MainWindow);
        actionUnderline->setObjectName(QString::fromUtf8("actionUnderline"));
        actionUnderline->setCheckable(true);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/under.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUnderline->setIcon(icon11);
        actionColor = new QAction(MainWindow);
        actionColor->setObjectName(QString::fromUtf8("actionColor"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/color.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionColor->setIcon(icon12);
        actionLeft = new QAction(MainWindow);
        actionLeft->setObjectName(QString::fromUtf8("actionLeft"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/left.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLeft->setIcon(icon13);
        actionCenter = new QAction(MainWindow);
        actionCenter->setObjectName(QString::fromUtf8("actionCenter"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/center.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCenter->setIcon(icon14);
        actionRight = new QAction(MainWindow);
        actionRight->setObjectName(QString::fromUtf8("actionRight"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/right.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRight->setIcon(icon15);
        actionJustify = new QAction(MainWindow);
        actionJustify->setObjectName(QString::fromUtf8("actionJustify"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/justify.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionJustify->setIcon(icon16);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionCloseAll = new QAction(MainWindow);
        actionCloseAll->setObjectName(QString::fromUtf8("actionCloseAll"));
        actionTile = new QAction(MainWindow);
        actionTile->setObjectName(QString::fromUtf8("actionTile"));
        actioncasade = new QAction(MainWindow);
        actioncasade->setObjectName(QString::fromUtf8("actioncasade"));
        actionNext = new QAction(MainWindow);
        actionNext->setObjectName(QString::fromUtf8("actionNext"));
        actionBefore = new QAction(MainWindow);
        actionBefore->setObjectName(QString::fromUtf8("actionBefore"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBoxFontStyle = new QComboBox(centralwidget);
        comboBoxFontStyle->addItem(QString());
        comboBoxFontStyle->addItem(QString());
        comboBoxFontStyle->addItem(QString());
        comboBoxFontStyle->addItem(QString());
        comboBoxFontStyle->addItem(QString());
        comboBoxFontStyle->addItem(QString());
        comboBoxFontStyle->addItem(QString());
        comboBoxFontStyle->addItem(QString());
        comboBoxFontStyle->addItem(QString());
        comboBoxFontStyle->setObjectName(QString::fromUtf8("comboBoxFontStyle"));
        comboBoxFontStyle->setMinimumSize(QSize(150, 0));

        horizontalLayout->addWidget(comboBoxFontStyle);

        fontComboBox = new QFontComboBox(centralwidget);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));

        horizontalLayout->addWidget(fontComboBox);

        comboBoxPointSize = new QComboBox(centralwidget);
        comboBoxPointSize->setObjectName(QString::fromUtf8("comboBoxPointSize"));
        comboBoxPointSize->setMinimumSize(QSize(100, 0));
        QFont font;
        font.setPointSize(9);
        comboBoxPointSize->setFont(font);

        horizontalLayout->addWidget(comboBoxPointSize);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));

        verticalLayout->addWidget(mdiArea);


        horizontalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menu_F = new QMenu(menubar);
        menu_F->setObjectName(QString::fromUtf8("menu_F"));
        menu_E = new QMenu(menubar);
        menu_E->setObjectName(QString::fromUtf8("menu_E"));
        menu_O = new QMenu(menubar);
        menu_O->setObjectName(QString::fromUtf8("menu_O"));
        menu_D = new QMenu(menu_O);
        menu_D->setObjectName(QString::fromUtf8("menu_D"));
        menu_2 = new QMenu(menu_O);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_W = new QMenu(menubar);
        menu_W->setObjectName(QString::fromUtf8("menu_W"));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setMouseTracking(true);
        statusbar->setFocusPolicy(Qt::NoFocus);
        statusbar->setContextMenuPolicy(Qt::DefaultContextMenu);
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(MainWindow);
        toolBar_3->setObjectName(QString::fromUtf8("toolBar_3"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_3);

        menubar->addAction(menu_F->menuAction());
        menubar->addAction(menu_E->menuAction());
        menubar->addAction(menu_O->menuAction());
        menubar->addAction(menu_W->menuAction());
        menubar->addAction(menu->menuAction());
        menu_F->addAction(actionNew);
        menu_F->addAction(actionOpen);
        menu_F->addAction(actionSave);
        menu_F->addAction(action_SaveAt);
        menu_F->addAction(actionPrint);
        menu_F->addAction(actionPreview);
        menu_F->addAction(actionExit);
        menu_E->addAction(actionUndo);
        menu_E->addAction(actionRedo);
        menu_E->addAction(actionCut);
        menu_E->addAction(actionCopy);
        menu_E->addAction(actionPaset);
        menu_O->addAction(menu_D->menuAction());
        menu_O->addAction(menu_2->menuAction());
        menu_O->addAction(actionColor);
        menu_D->addAction(actionBold);
        menu_D->addAction(actionItalic);
        menu_D->addAction(actionUnderline);
        menu_2->addAction(actionLeft);
        menu_2->addAction(actionCenter);
        menu_2->addAction(actionRight);
        menu_2->addAction(actionJustify);
        menu_W->addAction(actionClose);
        menu_W->addAction(actionCloseAll);
        menu_W->addSeparator();
        menu_W->addAction(actionTile);
        menu_W->addAction(actioncasade);
        menu_W->addSeparator();
        menu_W->addAction(actionNext);
        menu_W->addAction(actionBefore);
        menu->addAction(actionAbout);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave);
        toolBar->addAction(actionPrint);
        toolBar_2->addAction(actionUndo);
        toolBar_2->addAction(actionRedo);
        toolBar_2->addAction(actionCut);
        toolBar_2->addAction(actionCopy);
        toolBar_2->addAction(actionPaset);
        toolBar_3->addAction(actionColor);
        toolBar_3->addAction(actionBold);
        toolBar_3->addAction(actionItalic);
        toolBar_3->addAction(actionUnderline);
        toolBar_3->addSeparator();
        toolBar_3->addAction(actionLeft);
        toolBar_3->addAction(actionCenter);
        toolBar_3->addAction(actionRight);
        toolBar_3->addAction(actionJustify);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "\345\205\263\344\272\216(&A)", nullptr));
        actionNew->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_SaveAt->setText(QCoreApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&A)", nullptr));
        actionPrint->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260(&P)", nullptr));
#if QT_CONFIG(shortcut)
        actionPrint->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPreview->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\215\260\351\242\204\350\247\210(&)", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "\346\222\244\351\224\200(&U)", nullptr));
#if QT_CONFIG(shortcut)
        actionUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRedo->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\201\232(&R)", nullptr));
#if QT_CONFIG(shortcut)
        actionRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCut->setText(QCoreApplication::translate("MainWindow", "\345\211\252\345\210\207(&T)", nullptr));
#if QT_CONFIG(shortcut)
        actionCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCopy->setText(QCoreApplication::translate("MainWindow", "\345\244\215\345\210\266(&C)", nullptr));
        actionPaset->setText(QCoreApplication::translate("MainWindow", "\347\262\230\350\264\264(&P)", nullptr));
#if QT_CONFIG(shortcut)
        actionPaset->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBold->setText(QCoreApplication::translate("MainWindow", "\345\212\240\347\262\227(&B)", nullptr));
#if QT_CONFIG(shortcut)
        actionBold->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_CONFIG(shortcut)
        actionItalic->setText(QCoreApplication::translate("MainWindow", "\345\200\276\346\226\234(&I)", nullptr));
#if QT_CONFIG(shortcut)
        actionItalic->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUnderline->setText(QCoreApplication::translate("MainWindow", "\344\270\213\345\210\222\347\272\277(&U)", nullptr));
#if QT_CONFIG(shortcut)
        actionUnderline->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+U", nullptr));
#endif // QT_CONFIG(shortcut)
        actionColor->setText(QCoreApplication::translate("MainWindow", "\351\242\234\350\211\262(&C)", nullptr));
        actionLeft->setText(QCoreApplication::translate("MainWindow", "\345\267\246\345\257\271\351\275\220(&L)", nullptr));
#if QT_CONFIG(shortcut)
        actionLeft->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCenter->setText(QCoreApplication::translate("MainWindow", "\345\261\205\344\270\255(&C)", nullptr));
#if QT_CONFIG(shortcut)
        actionCenter->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRight->setText(QCoreApplication::translate("MainWindow", "\345\217\263\345\257\271\351\275\220(&R)", nullptr));
#if QT_CONFIG(shortcut)
        actionRight->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionJustify->setText(QCoreApplication::translate("MainWindow", "\344\270\244\347\253\257\345\257\271\351\275\220(&J)", nullptr));
#if QT_CONFIG(shortcut)
        actionJustify->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+J", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255(&O)", nullptr));
        actionCloseAll->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\346\211\200\346\234\211(&A)", nullptr));
        actionTile->setText(QCoreApplication::translate("MainWindow", "\345\271\263\351\223\272(&T)", nullptr));
        actioncasade->setText(QCoreApplication::translate("MainWindow", "\345\261\202\345\217\240(&C)", nullptr));
        actionNext->setText(QCoreApplication::translate("MainWindow", "\345\220\216\344\270\200\344\270\252(&X)", nullptr));
#if QT_CONFIG(tooltip)
        actionNext->setToolTip(QCoreApplication::translate("MainWindow", "\345\220\216\344\270\200\344\270\252(X)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNext->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Tab", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBefore->setText(QCoreApplication::translate("MainWindow", "\345\211\215\344\270\200\344\270\252(&V)", nullptr));
#if QT_CONFIG(shortcut)
        actionBefore->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Tab", nullptr));
#endif // QT_CONFIG(shortcut)
        comboBoxFontStyle->setItemText(0, QCoreApplication::translate("MainWindow", "\346\240\207\345\207\206", nullptr));
        comboBoxFontStyle->setItemText(1, QCoreApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(\342\227\217)", nullptr));
        comboBoxFontStyle->setItemText(2, QCoreApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(\342\227\213)", nullptr));
        comboBoxFontStyle->setItemText(3, QCoreApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(\342\226\240)", nullptr));
        comboBoxFontStyle->setItemText(4, QCoreApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(1.2.3.)", nullptr));
        comboBoxFontStyle->setItemText(5, QCoreApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(a.b.c.)", nullptr));
        comboBoxFontStyle->setItemText(6, QCoreApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(A.B.C.)", nullptr));
        comboBoxFontStyle->setItemText(7, QCoreApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(i.ii.iii.)", nullptr));
        comboBoxFontStyle->setItemText(8, QCoreApplication::translate("MainWindow", "\351\241\271\347\233\256\347\254\246\345\217\267(I.II.III.)", nullptr));

        menu_F->setTitle(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266(F)", nullptr));
        menu_E->setTitle(QCoreApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", nullptr));
        menu_O->setTitle(QCoreApplication::translate("MainWindow", "\346\240\274\345\274\217(&O)", nullptr));
        menu_D->setTitle(QCoreApplication::translate("MainWindow", "\345\255\227\344\275\223(&D)", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\346\256\265\350\220\275", nullptr));
        menu_W->setTitle(QCoreApplication::translate("MainWindow", "\347\252\227\344\275\223(&W)", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
#if QT_CONFIG(statustip)
        toolBar->setStatusTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272\344\270\200\344\270\252\346\226\207\346\241\243", nullptr));
#endif // QT_CONFIG(statustip)
        toolBar_2->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_2", nullptr));
        toolBar_3->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar_3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
