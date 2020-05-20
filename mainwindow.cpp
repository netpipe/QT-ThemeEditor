#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <ui_find2.h>
#include "find.h"
#include <QDebug>
#include <QColorDialog>

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
        if (fileName == ""){}else{
   //     qDebug()<< fileName.toLatin1() ;
        QFile file(fileName);
        file.open(QIODevice::Text | QIODevice::ReadOnly);
        QString content;
        while(!file.atEnd())
            content.append(file.readLine());
        ui->code->setPlainText(content);
        file.close();


        QPalette p = ui->code->palette();
        p.setColor(QPalette::Base, Qt::red);
        p.setColor(QPalette::Text, Qt::white);
        ui->code->setPalette(p);

}

//        QTextCursor highlightCursor( ui->code->document());
//     //   QTextCursor cursor(document);

//        QTextCharFormat plainFormat(highlightCursor.charFormat());
//        QTextCharFormat colorFormat = plainFormat;
//        colorFormat.setForeground(Qt::blue);



}

void MainWindow::on_Save_clicked()
{
    if (fileName.toLatin1()==""){
    fileName = QFileDialog::getSaveFileName(this,  tr("Save TX"), "",  tr("SaveRX/TX File (*.txt);;All Files (*)"));
    }

    QFile file(fileName);
       if(file.open(QIODevice::WriteOnly | QIODevice::Text))
       {
           QTextStream stream(&file);
           file.seek(0);
           stream << ui->code->document()->toRawText();
        //   stream << endl;
            file.close();
       }
        qDebug() << "wrote/ saving ";
//       int counter=0;


//       QString line;

     //  QFile f(fileName);
//       if(file.open(QIODevice::ReadOnly))
//       {
//           QString s;
//           QTextStream t(&file);
//        //    file.seek(0);

//           do {
//               line = t.readLine();
//               counter++;
//           } while(!t.atEnd());

//           file.close();
//       }

//              qDebug() << "lines in file: " << counter;


//        line="";

     //  QFile file2(fileName);
//          if(file.open(QIODevice::WriteOnly ))
//          {
//           QTextStream stream2(&file);
//                         file.seek(0);
//            for (int i=0; i <= counter-3; i++){
//                line = stream2.readLine();
//                qDebug() << "writing line";
//              stream2 << line;
//             // stream << endl;
//            }
//           file.close();
//          }


//       QFile file(fileName);
//          if(file.open(QIODevice::ReadWrite | QIODevice::Text))
//          {
//              QTextStream stream(&file);
//              file.seek(0);


//           file.close();
//          }



//loadStyleSheet( fileName.toLatin1() );

qApp->setStyleSheet(ui->code->toPlainText());

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

void MainWindow::search(QString search,QPlainTextEdit *edit)
{
//https://doc.qt.io/archives/4.6/uitools-textfinder.html

         //   dialog->show();

//    QTextCharFormat fmt;
//    fmt.setBackground(Qt::yellow);

//    QTextCursor cursor(ui->code->document());
//    cursor.setPosition(begin, QTextCursor::MoveAnchor);
//    cursor.setPosition(end, QTextCursor::KeepAnchor);
//    cursor.setCharFormat(fmt);


    QString searchString = search.toLatin1(); //ui->lineFind->text().toLatin1();
    QTextDocument *document = edit->document(); //ui->code->document();

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
//qDebug() << document->find(searchString, highlightCursor, QTextDocument::FindWholeWords);

            if (!highlightCursor.isNull()) {
                found = true;
                highlightCursor.movePosition(QTextCursor::WordRight,
                                       QTextCursor::KeepAnchor,1);
                highlightCursor.mergeCharFormat(colorFormat);
                // highlightCursor.hasSelection();
                //    if (replace == true)
                // highlightCursor.insertText(ui->lineReplace->text()+" ");
            }
        }

//replace=false;


        cursor.endEditBlock();
       // isFirstTime = false;

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
    isFirstTime = true;

    QPlainTextEdit *plaineditptr = ui->code;


    undobuffer = ui->code->toPlainText();
    undobuffer2 = undobuffer;
    undobuffer.replace(ui->lineFind->text().toLatin1(),ui->lineReplace->text().toLatin1() );
  //  ui->code->setPlainText(undobuffer.replace("load","test"));
    ui->code->setPlainText(undobuffer);

    undobuffer = ui->code->toPlainText();

    search(ui->lineReplace->text().toLatin1(),plaineditptr);

    replace=true;

//    while(ui->textEdit->find(findString, QTextDocument::FindFlag()))
//        {
//            //ui->textEdit->textCursor().movePosition(QTextCursor().Start, QTextCursor().MoveAnchor);
//            ui->textEdit->find(findString, QTextDocument::FindFlag());
//            ui->textEdit->textCursor().insertText(replaceString);
//            ui->textEdit->cursor().setPos(0,0);
//        }
}

void MainWindow::on_highlight_clicked()
{
    isFirstTime = false;
    replace=true;

    QPlainTextEdit *test = ui->code;
    search(ui->lineFind->text().toLatin1(),test);

}

void MainWindow::on_apply_clicked()
{
    qApp->setStyleSheet(ui->code->toPlainText());
}



void MainWindow::on_undo_clicked()
{
    if(replace){
           ui->code->setPlainText(undobuffer2);
        replace=false;
    }
}

void MainWindow::on_code_selectionChanged()
{
    if(replace==true){
           ui->code->setPlainText(undobuffer);
        replace=false;
    }
}

void MainWindow::on_color_clicked()
{
    QColor color = QColorDialog::getColor(Qt::black, this, "Pick a color",  QColorDialog::DontUseNativeDialog);
}
