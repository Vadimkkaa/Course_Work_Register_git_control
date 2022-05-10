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
    QMessageBox::information(this, "User Manual", " 1.To view register, please push the 'Register Editor' button\n\n 2.To upload the register to GitHub, please push the 'Upload to GitHub' button\n\n 3.If you want to exit the program push the 'Exit' button\n\n Note: In order to upload to GitHub you need to save data from the register editor. To do that you have to click purple icon(looks like floppy disk) and click 'Ok' and after that click 'Yes'\n \t\t\t    Have fun ;) ");
}





void MainWindow_2::on_pushButton_3_clicked()
{

   QMessageBox::StandardButton reply= QMessageBox::information(this, "Upload to GitHub", "Note: 'Upload to GitHub' uploads the latest log from register editor by overwriting the existing one\n\n If you want to proceed please click 'Yes' otherwise there won't be any uploading done",QMessageBox::Yes | QMessageBox::No);

    if(reply== QMessageBox::Yes){

        QProcess *process = new QProcess(this);

        QDir dir(QCoreApplication::applicationDirPath());
        QString file = dir.absoluteFilePath("C:/Program Files/Git/git-bash.exe");
        process->start(file);

        Sleep(4000);
        QMessageBox::information(this,"Upload progress","Done!");

    }
}

