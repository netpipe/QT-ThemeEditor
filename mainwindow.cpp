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

  connect(dialog, SIGNAL(findtext()), this , SLOT(on_actionExit_triggered()));

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
        dialog->show();
}
