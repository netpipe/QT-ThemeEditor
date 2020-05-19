#ifndef SEARCH2_H
#define SEARCH2_H

#include <QWidget>
#include "ui_search2.h"
namespace Ui {
class search2;
}

class search2 : public QWidget
{
    Q_OBJECT

public:
    explicit search2(QWidget *parent = nullptr);
    ~search2();

private slots:
    void on_pushButton_clicked();

private:
    Ui::search2 *ui;
};

#endif // SEARCH2_H
