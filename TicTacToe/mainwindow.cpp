#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTabBar>
#include <vector>
#include <QNetworkInterface>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tabWidget->tabBar()->hide();
    ui->tabWidget->setCurrentIndex(0);



    ui->label_IP->setText("Your IP: " + QHostAddress(QHostAddress::LocalHost).toString());
    ui->labe_Port->setText("Your Port: 1111");
    ui->radioButton_X->setChecked(true);

    buttons = {
        ui->pushButton_1_1,
        ui->pushButton_1_2,
        ui->pushButton_1_3,
        ui->pushButton_2_1,
        ui->pushButton_2_2,
        ui->pushButton_2_3,
        ui->pushButton_3_1,
        ui->pushButton_3_2,
        ui->pushButton_3_3
    };


    udpSocket = new QUdpSocket(this);
    udpSocket->bind(QHostAddress::Any, 1111); //Aдресс и порт для сокета, на которые он будет получать данные
    connect(udpSocket, SIGNAL(readyRead()), this, SLOT(ReadingData()));

    for(auto btn:buttons){
        connect(btn, SIGNAL(clicked()) ,this, SLOT(fieldButtonClicked()));
    }
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::fieldButtonClicked()
{
    QPushButton* buttonClicked = dynamic_cast<QPushButton*>(sender()); //Динамик для указателей, возвращает указатель
    if(buttonClicked == nullptr || !buttonClicked->text().isEmpty())
        return;

    sendingData(buttonClicked->objectName());
    buttonClicked->setText(getSymbol());
    checkingWinner();

}
void MainWindow::on_pushButton_Create_Lobby_clicked()
{
    ui->tabWidget->setCurrentIndex(1);
    setNicknames();
}
void MainWindow::ReadingData(){
    QHostAddress senderAdress;
    quint16 senderPort;

    while(udpSocket->hasPendingDatagrams()){
        QByteArray datagram;
        datagram.resize(udpSocket->pendingDatagramSize());//Размер датаграммы для отправки
        udpSocket->readDatagram(datagram.data(),datagram.size(), &senderAdress, &senderPort);//Чтение данных

        qDebug()<<datagram.data()<<"IP: " + senderAdress.toString()<<"Port: " + QString("%1").arg(senderPort);

        QPushButton *find = this->findChild<QPushButton*>(static_cast<QString>(datagram.data()));

        if(ui->radioButton_O->isChecked()){
            find->setText("X");
        }
        else
            find->setText("O");
    }
}

void MainWindow::sendingData(QString btnName)
{
    udpSocket->writeDatagram(btnName.toUtf8(), static_cast<QHostAddress>(ui->lineEdit_ID->text()), 9999);
}

void MainWindow::setNicknames()
{
    if(ui->lineEdit_Nickname->text() != nullptr)
        ui->label_InGame_Player1Name->setText(ui->lineEdit_Nickname->text());
}

QString MainWindow::getSymbol()
{
    QString currentPlayerSymbol;
    if(ui->radioButton_O->isChecked())
        return currentPlayerSymbol = "O";
    else
        return currentPlayerSymbol = "X";
}

void MainWindow::checkingWinner(){
    if(!ui->pushButton_1_1->text().isEmpty() && ui->pushButton_1_1->text() == ui->pushButton_1_2->text() &&ui->pushButton_1_1->text() == ui->pushButton_1_3->text()){
        //1r
        ui->label_InGame_VS->setText("WON!");
    }
    if(!ui->pushButton_2_1->text().isEmpty() && ui->pushButton_2_1->text() == ui->pushButton_2_2->text() &&ui->pushButton_2_1->text() == ui->pushButton_2_3->text()){
        //2r
        ui->label_InGame_VS->setText("WON!");
    }
    if(!ui->pushButton_3_1->text().isEmpty() && ui->pushButton_3_1->text() == ui->pushButton_3_2->text() &&ui->pushButton_3_1->text() == ui->pushButton_3_3->text()){
        //3r
        ui->label_InGame_VS->setText("WON!");
    }
    if(!ui->pushButton_1_1->text().isEmpty() && ui->pushButton_1_1->text() == ui->pushButton_2_1->text() &&ui->pushButton_1_1->text() == ui->pushButton_3_1->text()){
        //1c
        ui->label_InGame_VS->setText("WON!");
    }
    if(!ui->pushButton_1_2->text().isEmpty() && ui->pushButton_1_2->text() == ui->pushButton_2_2->text() &&ui->pushButton_1_2->text() == ui->pushButton_3_2->text()){
        //2c
        ui->label_InGame_VS->setText("WON!");
    }
    if(!ui->pushButton_1_3->text().isEmpty() && ui->pushButton_1_3->text() == ui->pushButton_2_3->text() &&ui->pushButton_1_3->text() == ui->pushButton_3_3->text()){
       //3c
        ui->label_InGame_VS->setText("WON!");
    }
    if(!ui->pushButton_1_1->text().isEmpty() && ui->pushButton_1_1->text() == ui->pushButton_2_2->text() &&ui->pushButton_1_1->text() == ui->pushButton_3_3->text()){
        // \d
        ui->label_InGame_VS->setText("WON!");
    }
    if(!ui->pushButton_1_3->text().isEmpty() && ui->pushButton_1_3->text() == ui->pushButton_2_2->text() &&ui->pushButton_1_3->text() == ui->pushButton_3_1->text()){
        // /d
        ui->label_InGame_VS->setText("WON!");
    }
}


void MainWindow::on_pushButton_resetGame_clicked()
{
    for(auto btn:buttons){
        btn->setText(nullptr);
    }
    ui->label_InGame_VS->setText("VS");
}
