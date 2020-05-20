#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <ui_find2.h>
#include "find.h"
#include <QDebug>
#include <QColorDialog>
#include <QDirIterator>
#include <QTextCodec>

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


  QDirIterator it("./Resource/themes/", QStringList() << "*.qss", QDir::Files, QDirIterator::Subdirectories);
  while (it.hasNext()){
    //  QFileInfo fileInfo(f.fileName());
      ui->cmbTheme->addItem(it.next().toLatin1());
  }


  QFile MyFile("themes.txt");
  if(MyFile.exists()){
      MyFile.open(QIODevice::ReadWrite);
      QTextStream in (&MyFile);
      QString line;
      QStringList list;
       //   QList<QString> nums;
      QStringList nums;
      QRegExp rx("[:]");
      line = in.readLine();
QString stylesheet;
      if (line.contains(":")) {
          list = line.split(rx);
              qDebug() << "theme" <<  list.at(1).toLatin1();
              stylesheet =  list.at(1).toLatin1();
        loadStyleSheet( list.at(1).toLatin1());

              MyFile.close();
      }

fileName=stylesheet;
      QFile file(stylesheet);

      file.open(QIODevice::Text | QIODevice::ReadOnly);
      QString content;
      while(!file.atEnd())
          content.append(file.readLine());
      ui->code->setPlainText(content);

  }
loaded=true;
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
    fileName = QFileDialog::getSaveFileName(this,  tr("Save theme"), "./Resource/themes/.qss",  tr("SaveTheme File (*.qss);;All Files (*)"));
    }
    if (fileName == ""){return;}

    QStringList lines = ui->code->document()->toPlainText().split('\n', QString::SkipEmptyParts);
    if (lines.count() > 3)
      qDebug() << "fourth line:" << lines.at(3);


    QFile file(fileName);
       if(file.open(QIODevice::WriteOnly | QIODevice::Text))
       {
           QTextStream stream(&file);
           file.seek(0);
           QTextCodec *fileCodec = QTextCodec::codecForName("windows-1250");
           stream.setCodec(fileCodec);


           for (int n = 0; n < lines.count() ; ++n)
          {   //line = str.readLine();
               stream << lines.at(n) << endl;
        //     stream << ui->code->document()->toRawText();
       }
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
 //ui->code->cursor().setPos(0,0);
    //    ui->code->viewport()->scroll()
        cursor.beginEditBlock();

        QTextCharFormat plainFormat(highlightCursor.charFormat());
        QTextCharFormat colorFormat = plainFormat;
        colorFormat.setForeground(Qt::blue);


//https://doc.bccnsoft.com/docs/PyQt4/qtextdocument.html
//https://doc.qt.io/qt-5/qtwidgets-widgets-codeeditor-example.html

        while (!highlightCursor.isNull() && !highlightCursor.atEnd()) {
            highlightCursor = document->find(searchString, highlightCursor, QTextDocument::FindWholeWords);
//qDebug() << document->find(searchString, highlightCursor, QTextDocument::FindWholeWords);

            if (!highlightCursor.isNull()) {
                found = true;
                highlightCursor.movePosition(QTextCursor::WordRight,
                                       QTextCursor::KeepAnchor,1);
                highlightCursor.mergeCharFormat(colorFormat);
                //document->find("word");
                //moveCursor(QTextCursor::Start)
               // ui->code->moveCursor(QTextCursor::Left, QTextCursor::MoveAnchor);
            //    highlightCursor.a
              //  QRect crect = ui->code->cursorRect().x;
             //   highlightCursor
//                cursor.clearSelection();
//                cursor.insertText("Hello World");
                //hasSelection
              //  qDebug() << document->find("sheet").movePosition(QTextCursor::NextWord, QTextCursor::KeepAnchor);
               // qDebug() << ui->code->cursorRect().x() << ui->code->cursorRect().y();
             //   ui->code->viewport()->scroll(ui->code->cursorRect().x , ui->code->cursorRect().y);

                // highlightCursor.hasSelection();
                //    if (replace == true)
                // highlightCursor.insertText(ui->lineReplace->text()+" ");
            }
        }

//replace=false;


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

    findbuf=ui->lineFind->text();
    replacebuf=ui->lineReplace->text();


    ui->lineFind->setText( ui->lineReplace->text());



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


    undobuffer = ui->code->toPlainText();
    //undobuffer2 = undobuffer;
    QPlainTextEdit *test = ui->code;
    search(ui->lineFind->text().toLatin1(),test);

  //  replace=true;
}

void MainWindow::on_apply_clicked()
{
    qApp->setStyleSheet(ui->code->toPlainText());
                colorundo=true;
}



void MainWindow::on_undo_clicked()
{
    if(replace){
        if(colorundo){
            ui->lineFind->setText(findbuf);
            ui->lineReplace->setText(replacebuf);
            colorundo=false;
        }
           ui->code->setPlainText(undobuffer2);
        replace=false;
    }
    replace=false;
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
    QColor color = QColorDialog::getColor(ui->lineFind->text(), this, "Pick a color",  QColorDialog::DontUseNativeDialog);

    // when color picked put it into lineReplace ui field
    ui->lineReplace->setText(color.name());
    colorundo=true;
}

void MainWindow::on_cmbTheme_currentIndexChanged(const QString &arg1)
{
    if (loaded==true)
    {
    fileName=ui->cmbTheme->currentText();
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
    loadStyleSheet(ui->cmbTheme->currentText());

    QFile file2("themes.txt");
        if(file2.open(QIODevice::ReadWrite | QIODevice::Text))// QIODevice::Append |
        {
                QTextStream stream(&file2);
                file2.seek(0);
               stream << "theme:" << ui->cmbTheme->currentText().toLatin1()<< endl;
                for (int i = 0; i < ui->cmbTheme->count(); i++)
                {
                 stream << "theme:" << ui->cmbTheme->itemText(i) << endl;
                }
            //                file.write("\n");
               file2.close();
        }

    if (ui->cmbTheme->currentText().toLatin1() != ""){
      //   ui->cmbTheme->currentText().toLatin1();
    }
}

}

void MainWindow::on_SaveAs_clicked()
{
    fileName = QFileDialog::getSaveFileName(this,  "Save Theme", "./Resource/themes/.qss", tr("SaveTheme File (*.qss);;All Files (*)"));
if (fileName == ""){return;}
    QStringList lines = ui->code->document()->toPlainText().split('\n', QString::SkipEmptyParts);
    if (lines.count() > 3)
      qDebug() << "fourth line:" << lines.at(3);


    QFile file(fileName);
       if(file.open(QIODevice::WriteOnly | QIODevice::Text))
       {
           QTextStream stream(&file);
           file.seek(0);
           QTextCodec *fileCodec = QTextCodec::codecForName("windows-1250");
           stream.setCodec(fileCodec);


           for (int n = 0; n < lines.count() ; ++n)
          {   //line = str.readLine();
               stream << lines.at(n) << endl;
        //     stream << ui->code->document()->toRawText();
       }
        //   stream << endl;
            file.close();
       }
       ui->cmbTheme->addItem(fileName);
        qDebug() << "wrote/ saving ";
}

void MainWindow::on_actionColorPicker_triggered()
{
    on_color_clicked();
}

void MainWindow::on_actionundo_triggered()
{
on_undo_clicked();
}

void MainWindow::on_actionOpen_triggered()
{
on_Open_clicked();
}

void MainWindow::on_actionSave_triggered()
{
    on_Save_clicked();
}

void MainWindow::on_actionSaveAs_triggered()
{
    on_SaveAs_clicked();
}

void MainWindow::on_actionApply_triggered()
{
    on_apply_clicked();
}

void MainWindow::on_actionNew_triggered()
{
    fileName="";
    undobuffer = ui->code->toPlainText();
    undobuffer2 = undobuffer;
    undobuffer = "";

  //  ui->code->setPlainText(undobuffer.replace("load","test"));
    ui->code->setPlainText(undobuffer.toLatin1());
    replace=true;
}
