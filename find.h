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

private:
    Ui::find2 *ui;
};

#endif // FIND_H
