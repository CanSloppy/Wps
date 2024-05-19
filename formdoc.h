#ifndef FORMDOC_H
#define FORMDOC_H

#include <QWidget>
#include <QFileInfo>
#include <QFile>
#include <QTextStream>
#include <QTextDocument>
#include <QTextDocumentWriter>
#include <QDebug>
#include <QTextCharFormat>
#include <QTextEdit>
#include <QFont>
#include <QTextCursor>

namespace Ui {
class FormDoc;
}

class FormDoc : public QWidget
{
    Q_OBJECT

public:
    explicit FormDoc(QWidget *parent = nullptr);
    ~FormDoc();
    void newDoc();
    void setFileInfo(const QString &filemame);
    QFileInfo * getFileInfo()const;
    QTextDocument* getDocument()const;
    bool saveAsDoc();
    void doUndo();
    void doRedo();
    void doCut();
    void doCopy();
    void doPaste();
    void setTextCharFormat(QTextCharFormat &fmt);
    void setTextColor();
    void setTextAligent(int num);
    void setBold(bool res);
    void setItalic(bool res);
    void setUnderline(bool res);
    QTextEdit *getTextEdit()const;
private:
    Ui::FormDoc *ui;
    QFileInfo *m_info = nullptr;
};

#endif // FORMDOC_H
