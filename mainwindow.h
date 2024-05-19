#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QMdiArea>
#include <QMdiSubWindow>
#include "formdoc.h"
#include <QSignalMapper>
#include <QTextCharFormat>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void refreshMenu();
    void insertSubAction();
    FormDoc* activeSubWindow();
    void initMainWindow();

private slots:
    void on_actionAbout_triggered();

    void on_actionNew_triggered();

    void on_mdiArea_subWindowActivated(QMdiSubWindow *arg1);

    void setActivateSubWindow(QWidget * widget);

    void on_actionOpen_triggered();

    void on_action_SaveAt_triggered();

    void on_comboBoxPointSize_activated(const QString &arg1);

    void on_fontComboBox_currentFontChanged(const QFont &f);

    void on_actionUndo_triggered();

    void on_actionColor_triggered();

    void on_actionRedo_triggered();

    void on_actionCut_triggered();

    void on_actionCopy_triggered();

    void on_actionPaset_triggered();

    void on_actionLeft_triggered();

    void on_actionCenter_triggered();

    void on_actionRight_triggered();

    void on_actionJustify_triggered();

    void on_actionBold_toggled(bool arg1);

    void on_actionItalic_toggled(bool arg1);

    void on_actionUnderline_toggled(bool arg1);

    void on_actionExit_triggered();

    void on_actionClose_triggered();

    void on_actionCloseAll_triggered();

    void on_actionTile_triggered();

    void on_actioncasade_triggered();

    void on_actionNext_triggered();

    void on_actionBefore_triggered();

    void on_actionPrint_triggered();

private:
    Ui::MainWindow *ui;
    QSignalMapper *m_mapper;
};
#endif // MAINWINDOW_H
