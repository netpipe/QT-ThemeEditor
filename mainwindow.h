#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPlainTextEdit>

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
        bool isFirstTime= true;
       void search(QString search,QPlainTextEdit *edit);
bool replace;
private slots:
    void on_Open_clicked();

    void on_Save_clicked();

    void on_actionExit_triggered();

    void on_replace_clicked();

    void on_highlight_clicked();

    void on_apply_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
