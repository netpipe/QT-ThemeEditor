#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString fileName;
    void loadStyleSheet(QString sheet_name);
private slots:
    void on_Open_clicked();

    void on_Save_clicked();

    void on_actionExit_triggered();

    void on_search_clicked();

private:
    QWidget *searchwidget;


    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
