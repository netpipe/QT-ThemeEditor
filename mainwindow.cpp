#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <ui_find2.h>
#include "find.h"

find2 *dialog ;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
ui->setupUi(this);

//searchwidget = new QWidget;
////    Ui::search ui;
////    ui.setupUi(searchwidget);
//// searchwidget->show();

//search2 test(searchwidget);
//Ui::search2 test2;
//test2.setupUi(searchwidget);
//test.show();

dialog = new find2();

  connect(dialog, SIGNAL(findtext()), this , SLOT(on_search_clicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Open_clicked()
{
        fileName = QFileDialog::getOpenFileName(this, tr("Open rx/tx"), "./", tr("rx/tx files (*.css *.qss *.txt)"));
   //     qDebug()<< fileName.toLatin1() ;
        QFile file(fileName);
        file.open(QIODevice::Text | QIODevice::ReadOnly);
        QString content;
        while(!file.atEnd())
            content.append(file.readLine());
        ui->code->setPlainText(content);
        file.close();
}

void MainWindow::on_Save_clicked()
{
    if (fileName.toLatin1()==""){
    fileName = QFileDialog::getSaveFileName(this,  tr("Save TX"), "",  tr("SaveRX/TX File (*.txt);;All Files (*)"));
    }

    QFile file(fileName);
       if(file.open(QIODevice::ReadWrite | QIODevice::Text))
       {
           QTextStream stream(&file);
           file.seek(0);

           stream << ui->code->toPlainText();

        file.close();
       }
loadStyleSheet( fileName.toLatin1());
}

void MainWindow::loadStyleSheet( QString sheet_name)
{
    QFile file(sheet_name);
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());

    qApp->setStyleSheet(styleSheet);
}


void MainWindow::on_actionExit_triggered()
{
    QApplication::exit();
}

void MainWindow::on_search_clicked()
{
//https://doc.qt.io/archives/4.6/uitools-textfinder.html

            dialog->show();

//    QTextCharFormat fmt;
//    fmt.setBackground(Qt::yellow);

//    QTextCursor cursor(ui->code->document());
//    cursor.setPosition(begin, QTextCursor::MoveAnchor);
//    cursor.setPosition(end, QTextCursor::KeepAnchor);
//    cursor.setCharFormat(fmt);





//    QString x = "start some text here end";
//    QString s = "start";
//    QString e = "end";
//    int start = x.indexOf(s, 0, Qt::CaseInsensitive);
//    int end = x.indexOf(e, Qt::CaseInsensitive);

//    if(start != -1){ // we found it
//        QString y = x.mid(start + s.length(), ((end - (start + s.length())) > -1 ? (end - (start + s.length())) : -1)); // if you dont wanna pass in a number less than -1
//        or
//        QString y = x.mid(start + s.length(), (end - (start + s.length()))); // should not be any issues passing in a number less than -1, still works

//        qDebug() << y << (start + s.length()) << (end - (start + s.length()));
//    }






    QString searchString = ui->lineFind->text().toLatin1();
    QTextDocument *document = ui->code->document(); //ui->code->document();

    bool found = false;

    if (isFirstTime == false)
        document->undo();

    if (searchString.isEmpty()) {
   //     QMessageBox::information(this, tr("Empty Search Field"),                "The search field is empty. Please enter a word and click Find.");
    } else {

        QTextCursor highlightCursor(document);
        QTextCursor cursor(document);

        cursor.beginEditBlock();

        QTextCharFormat plainFormat(highlightCursor.charFormat());
        QTextCharFormat colorFormat = plainFormat;
        colorFormat.setForeground(Qt::red);

        while (!highlightCursor.isNull() && !highlightCursor.atEnd()) {
            highlightCursor = document->find(searchString, highlightCursor, QTextDocument::FindWholeWords);

            if (!highlightCursor.isNull()) {
                found = true;
                highlightCursor.movePosition(QTextCursor::WordRight,
                                       QTextCursor::KeepAnchor);
                highlightCursor.mergeCharFormat(colorFormat);
            }
        }

        cursor.endEditBlock();
        isFirstTime = false;

        if (found == false) {
        //    QMessageBox::information(this, tr("Word Not Found"),                "Sorry, the word cannot be found.");
        }
    }



//    while(ui->code->find(ui->lineFind->text(), QTextDocument::FindFlag()))
//        {
//            //ui->textEdit->textCursor().movePosition(QTextCursor().Start, QTextCursor().MoveAnchor);
//            ui->code->find(ui->lineFind->text(), QTextDocument::FindFlag());
//         //   ui->code->textCursor().insertText(dialog->ui->lineReplace());
//            ui->code->cursor().setPos(0,0);
//            ui->code->setFocus();
//        }

//    while(ui->code->find(dialog->ui->lineFind->text(), QTextDocument::FindFlag()))
//        {
//            //ui->textEdit->textCursor().movePosition(QTextCursor().Start, QTextCursor().MoveAnchor);
//            ui->code->find(dialog->ui->lineFind->text(), QTextDocument::FindFlag());
//         //   ui->code->textCursor().insertText(dialog->ui->lineReplace());
//            ui->code->cursor().setPos(0,0);
//        }


}



void MainWindow::on_replace_clicked()
{
//    while(ui->textEdit->find(findString, QTextDocument::FindFlag()))
//        {
//            //ui->textEdit->textCursor().movePosition(QTextCursor().Start, QTextCursor().MoveAnchor);
//            ui->textEdit->find(findString, QTextDocument::FindFlag());
//            ui->textEdit->textCursor().insertText(replaceString);
//            ui->textEdit->cursor().setPos(0,0);
//        }
}
