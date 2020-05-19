#include "find.h"
#include "ui_find2.h"

find2::find2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::find2)
{
    ui->setupUi(this);
    connect(ui->pushFind, SIGNAL(clicked()),this, SIGNAL(findtext()) );
}

find2::~find2()
{
    delete ui;
}

void find2::on_pushFind_clicked()
{

}
