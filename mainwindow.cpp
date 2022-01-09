#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_pushButton_clicked()
{
        QString login = ui->Login->text();
        QString password = ui->Password->text();
        QMessageBox msgBox;
        msgBox.setWindowTitle("Информация");
        msgBox.setText(login + '\n' + password);
        msgBox.exec();
}
