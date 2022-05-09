#include "mainwindow_2.h"
#include "ui_mainwindow_2.h"
#include "QMessageBox"

#include <QtCore/QCoreApplication>
#include <QProcess>
#include <QDebug>
#include <QDir>

MainWindow_2::MainWindow_2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_2)
{
    ui->setupUi(this);
}

MainWindow_2::~MainWindow_2()
{
    delete ui;
}


void MainWindow_2::on_pushButton_clicked()
{
    QProcess *process = new QProcess(this);
    QString file = QDir::homePath() + "/QT-projects/Register_Course_Work/register_prog/Procmon.exe";
    process->start(file);

}



void MainWindow_2::on_pushButton_4_clicked()
{
    QMessageBox::information(this, "User Manual", " 1.To view register, please push the 'Register Editor' button\n\n 2.To upload the register to GitHub, please push the 'Upload to GitHub' button\n\n 3.If you want to exit the program push the 'Exit' button\n\n \t\t\t    Have fun ;) ");
}




