#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QUdpSocket>
#include <vector>
#include "ui_mainwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void ReadingData();

private slots:
    void fieldButtonClicked();
    void checkingWinner();
    void on_pushButton_Create_Lobby_clicked();
    void sendingData(QString btnName);
    void setNicknames();
    QString getSymbol();
    void on_pushButton_resetGame_clicked();

private:
    Ui::MainWindow *ui;
    QUdpSocket *udpSocket;
    QVector<QPushButton*> buttons;
};
#endif // MAINWINDOW_H
