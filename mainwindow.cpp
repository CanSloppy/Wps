#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>
#include <QPrintDialog>
#include <QPrinter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    initMainWindow();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::refreshMenu()
{
    bool hasSubWindow = false;
    if(ui->mdiArea->subWindowList().count() > 0)
    {
        hasSubWindow = true;
    }

    ui->actionCut->setEnabled(hasSubWindow);
    ui->actionSave->setEnabled(hasSubWindow);
    ui->actionPrint->setEnabled(hasSubWindow);
    ui->action_SaveAt->setEnabled(hasSubWindow);
    ui->actionPreview->setEnabled(hasSubWindow);
    ui->actionCopy->setEnabled(hasSubWindow);
    ui->actionPaset->setEnabled(hasSubWindow);
    ui->actionCloseAll->setEnabled(hasSubWindow);
    ui->actionClose->setEnabled(hasSubWindow);
    ui->actioncasade->setEnabled(hasSubWindow);
    ui->actionTile->setEnabled(hasSubWindow);
    ui->actionNext->setEnabled(hasSubWindow);
    ui->actionBefore->setEnabled(hasSubWindow);
}

void MainWindow::insertSubAction()
{
    ui->menu_W->clear();
    ui->menu_W->addAction(ui->actionClose);
    ui->menu_W->addAction(ui->actionCloseAll);
    ui->menu_W->addSeparator();
    ui->menu_W->addAction(ui->actionTile);
    ui->menu_W->addAction(ui->actioncasade);
    ui->menu_W->addSeparator();
    ui->menu_W->addAction(ui->actionNext);
    ui->menu_W->addAction(ui->actionBefore);
    ui->menu_W->addSeparator();

    QList <QMdiSubWindow*> list = ui->mdiArea->subWindowList();
    for (int i = 0;i < list.count();i++) {
        QAction *action = new QAction();
        action->setCheckable(true);
        if(activeSubWindow()==(FormDoc*)list[i]->widget())
        {
            action->setChecked(true);
        }
        action->setText(QString::asprintf("%d ",i+1)+list[i]->windowTitle());
        ui->menu_W->addAction(action);
        connect(action,SIGNAL(triggered(bool)),
                m_mapper,SLOT(map()));
        m_mapper->setMapping(action,list[i]);
    }
}

FormDoc* MainWindow::activeSubWindow()
{
    QMdiSubWindow *midwindow = ui->mdiArea->activeSubWindow();
    if(midwindow)
    {
        return static_cast<FormDoc *>(midwindow->widget());
    }
    else
        return 0;
}

void MainWindow::initMainWindow()
{
    setWindowTitle("MyWPS");
    m_mapper = new QSignalMapper(this);
    connect(m_mapper,SIGNAL(mapped(QWidget*)),
            this,SLOT(setActivateSubWindow(QWidget*)));
    refreshMenu();
    QFontDatabase fontdb;
    for(auto i :fontdb.standardSizes())
    {
        ui->comboBoxPointSize->addItem(QString::number(i));
    }

    QActionGroup *group = new QActionGroup(this);
    group->addAction(ui->actionLeft);
    group->addAction(ui->actionCenter);
    group->addAction(ui->actionRight);
    group->addAction(ui->actionJustify);
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::aboutQt(this,"关于QT");
}

void MainWindow::on_actionNew_triggered()
{
    FormDoc *form = new FormDoc(this);
    form->setAttribute(Qt::WA_DeleteOnClose);
    form->setWindowTitle(form->windowTitle() +" - MyWPS");
    ui->mdiArea->addSubWindow(form);
    form->show();
    refreshMenu();
    insertSubAction();
}

void MainWindow::on_mdiArea_subWindowActivated(QMdiSubWindow *arg1)
{
    Q_UNUSED(arg1);
    insertSubAction();
    refreshMenu();
}

void MainWindow::setActivateSubWindow(QWidget *widget)
{
    ui->mdiArea->setActiveSubWindow((QMdiSubWindow*)widget);
    insertSubAction();
}

void MainWindow::on_actionOpen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this,
                                 "打开一个文件",
                                 QDir::currentPath(),
                                 "所有文件(*.*);;HTML文件(*.html;*.htm);;文本文件(*.txt)");
    if(filename.isEmpty())
    {
        return;
    }
    FormDoc *form = new FormDoc(this);
    form->setAttribute(Qt::WA_QuitOnClose);
    form->setFileInfo(filename);
    form->setWindowTitle(form->getFileInfo()->fileName() +" - MyWPS");
    ui->mdiArea->addSubWindow(form);
    form->show();
    insertSubAction();
    refreshMenu();
}


void MainWindow::on_action_SaveAt_triggered()
{
    if(activeSubWindow()&&activeSubWindow()->saveAsDoc())
    {
        statusBar()->showMessage("保存成功",3000);
    }

}

void MainWindow::on_comboBoxPointSize_activated(const QString &arg1)
{
    qreal pointSize = arg1.toFloat();
    QTextCharFormat fmt;
    fmt.setFontPointSize(pointSize);
    if(activeSubWindow())
    {
        activeSubWindow()->setTextCharFormat(fmt);
    }
}

void MainWindow::on_fontComboBox_currentFontChanged(const QFont &f)
{
    QTextCharFormat fmt;
    fmt.setFont(f);
    if(activeSubWindow())
    {
        activeSubWindow()->setTextCharFormat(fmt);
    }
}

void MainWindow::on_actionUndo_triggered()
{
    if(activeSubWindow())
    {
        activeSubWindow()->doUndo();
    }
}

void MainWindow::on_actionColor_triggered()
{
    if(activeSubWindow())
    {
        activeSubWindow()->setTextColor();
    }
}

void MainWindow::on_actionRedo_triggered()
{
    if(activeSubWindow())
    {
        activeSubWindow()->doRedo();
    }
}

void MainWindow::on_actionCut_triggered()
{
    activeSubWindow()->doCut();
}

void MainWindow::on_actionCopy_triggered()
{
    activeSubWindow()->doCopy();
}

void MainWindow::on_actionPaset_triggered()
{
    activeSubWindow()->doPaste();
}


void MainWindow::on_actionLeft_triggered()
{
    if(activeSubWindow())
    {
        activeSubWindow()->setTextAligent(1);
    }
}

void MainWindow::on_actionCenter_triggered()
{
    if(activeSubWindow())
    {
        activeSubWindow()->setTextAligent(2);
    }
}

void MainWindow::on_actionRight_triggered()
{
    if(activeSubWindow())
    {
        activeSubWindow()->setTextAligent(3);
    }
}

void MainWindow::on_actionJustify_triggered()
{
    if(activeSubWindow())
    {
        activeSubWindow()->setTextAligent(4);
    }
}

void MainWindow::on_actionBold_toggled(bool arg1)
{
    if(activeSubWindow())
    {
        activeSubWindow()->setBold(arg1);
    }
}

void MainWindow::on_actionItalic_toggled(bool arg1)
{
    if(activeSubWindow())
    {
        activeSubWindow()->setItalic(arg1);
    }
}

void MainWindow::on_actionUnderline_toggled(bool arg1)
{
    if(activeSubWindow())
    {
        activeSubWindow()->setUnderline(arg1);
    }
}

void MainWindow::on_actionExit_triggered()
{
    close();
}

void MainWindow::on_actionClose_triggered()
{
    ui->mdiArea->closeActiveSubWindow();
}

void MainWindow::on_actionCloseAll_triggered()
{
    ui->mdiArea->closeAllSubWindows();
}

void MainWindow::on_actionTile_triggered()
{
    ui->mdiArea->tileSubWindows();
}

void MainWindow::on_actioncasade_triggered()
{
    ui->mdiArea->cascadeSubWindows();
}

void MainWindow::on_actionNext_triggered()
{
    ui->mdiArea->activateNextSubWindow();
}

void MainWindow::on_actionBefore_triggered()
{
    ui->mdiArea->activatePreviousSubWindow();
}

void MainWindow::on_actionPrint_triggered()
{
    QPrinter pter(QPrinter::HighResolution);
    QPrintDialog *dialog = new QPrintDialog(&pter,this);
    if(activeSubWindow())
        dialog->setOption(QAbstractPrintDialog::PrintSelection,true);
    dialog->setWindowTitle("打印文档");

    FormDoc* form = activeSubWindow();
    if(dialog->exec() == QDialog::Accepted)
        form->getTextEdit()->print(&pter);

    delete dialog;
}
