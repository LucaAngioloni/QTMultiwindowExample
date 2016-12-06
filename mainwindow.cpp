#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeText()
{
    ui->text->setText("New Text");
    delete webWindow;
}

void MainWindow::on_openButton_clicked()
{
    webWindow = new Website();
    QObject::connect(webWindow, SIGNAL(buttonPressed()), this, SLOT(changeText()));
    webWindow->show();
}
