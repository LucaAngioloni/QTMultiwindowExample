#include "website.h"
#include "ui_website.h"

Website::Website(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Website)
{
    ui->setupUi(this);
}

Website::~Website()
{
    delete ui;
}

void Website::on_changeButton_clicked()
{
    emit buttonPressed();
}
