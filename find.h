#ifndef FIND_H
#define FIND_H

#include <QDialog>

namespace Ui {
class find2;
}

class find2 : public QDialog
{
    Q_OBJECT

public:
    explicit find2(QWidget *parent = nullptr);
    ~find2();
    Ui::find2 *ui;
private slots:
    void on_pushFind_clicked();
signals:
    void findtext();
private:

};

#endif // FIND_H
