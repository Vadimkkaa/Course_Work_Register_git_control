#ifndef MAINWINDOW_2_H
#define MAINWINDOW_2_H

#include <QMainWindow>

namespace Ui {
class MainWindow_2;
}

class MainWindow_2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_2(QWidget *parent = nullptr);
    ~MainWindow_2();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow_2 *ui;
};

#endif // MAINWINDOW_2_H
