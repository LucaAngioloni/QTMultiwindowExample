#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "website.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void changeText();

private slots:
    void on_openButton_clicked();

private:
    Ui::MainWindow *ui;

    //You want to keep a pointer to a new Website window
    Website* webWindow;
};

#endif // MAINWINDOW_H
