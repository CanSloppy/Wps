#include "formdoc.h"
#include "ui_formdoc.h"
#include <QFileDialog>
#include <QColorDialog>

FormDoc::FormDoc(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormDoc)
{
    ui->setupUi(this);
    newDoc();
}

FormDoc::~FormDoc()
{
    delete ui;
}

void FormDoc::newDoc()
{
    static int num = 0;
    setWindowTitle("WPS 文档 " + QString::number(++num));
}

void FormDoc::setFileInfo(const QString &filemame)
{
    m_info = new QFileInfo((filemame));
    QFile file(filemame);
    if(!file.open(QIODevice::ReadOnly))
    {
        return;
    }
    QTextStream stream(&file);
    stream.setCodec("UTF-8");
    ui->textEdit->setText(stream.readAll());
    file.close();
}

QFileInfo * FormDoc::getFileInfo()const{
    return m_info;
}

QTextDocument* FormDoc::getDocument() const
{
    return ui->textEdit->document();
}

bool FormDoc::saveAsDoc()
{
    QString docName = QFileDialog::getSaveFileName(this,
                                 "另存为",
                                 QDir::currentPath(),
                                 "HTML文档 (*.htm *.html);;"
                                 "所有文件(*.*)");
    QTextDocumentWriter writer(docName);
    if(writer.write(this->getDocument()))
    {
        return true;
    }
    else
        return false;

}

void FormDoc::doUndo()
{
    ui->textEdit->undo();
}

void FormDoc::doRedo()
{
    ui->textEdit->redo();
}

void FormDoc::doCut()
{
    ui->textEdit->cut();
}

void FormDoc::doCopy()
{
    ui->textEdit->copy();
}

void FormDoc::doPaste()
{
    ui->textEdit->paste();
}

void FormDoc::setTextCharFormat(QTextCharFormat &fmt)
{
    QTextCursor cursor = ui->textEdit->textCursor();
    if(!cursor.hasSelection())cursor.select(QTextCursor::WordUnderCursor);
    cursor.mergeCharFormat(fmt);
    ui->textEdit->mergeCurrentCharFormat(fmt);
}

void FormDoc::setTextColor()
{
    QTextCharFormat fmt;
    QColor color = QColorDialog::getColor(ui->textEdit->textColor(),this,"选择一个颜色");
    fmt.setForeground(color);
    setTextCharFormat(fmt);
}

void FormDoc::setTextAligent(int num)
{
    switch (num) {
    case 1:
        ui->textEdit->setAlignment(Qt::AlignLeft|Qt::AlignAbsolute);
        break;
    case 2:
        ui->textEdit->setAlignment(Qt::AlignCenter);
        break;
    case 3:
        ui->textEdit->setAlignment(Qt::AlignRight|Qt::AlignAbsolute);
        break;
    case 4:
        ui->textEdit->setAlignment(Qt::AlignJustify);
        break;
    }
}

void FormDoc::setBold(bool res)
{
    QTextCharFormat fmt;
    fmt.setFontWeight(res?QFont::Bold:QFont::Normal);
    setTextCharFormat(fmt);
}

void FormDoc::setItalic(bool res)
{
    QTextCharFormat fmt;
    fmt.setFontItalic(res);
    setTextCharFormat(fmt);
}

void FormDoc::setUnderline(bool res)
{
    QTextCharFormat fmt;
    fmt.setFontUnderline(res);
    setTextCharFormat(fmt);
}

QTextEdit *FormDoc::getTextEdit() const
{
    return ui->textEdit;
}


