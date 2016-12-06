#ifndef WEBSITE_H
#define WEBSITE_H

#include <QDialog>

namespace Ui {
class Website;
}

class Website : public QDialog
{
    Q_OBJECT

public:
    explicit Website(QWidget *parent = 0);
    ~Website();

signals:
    void buttonPressed();

private slots:
    void on_changeButton_clicked();

private:
    Ui::Website *ui;
};

#endif // WEBSITE_H
