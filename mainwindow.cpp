#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


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
    QString textAd = ui->textEditAd->toPlainText();
    QString textYas = ui->textEditYas->toPlainText();
    QString textKilo = ui->textEditKilo->toPlainText();
    QString textBoy = ui->textEditBoy->toPlainText();

    double bkc = 0;

    bkc = QString(textKilo).toDouble()/(QString(textBoy).toDouble() * QString(textBoy).toDouble());

    if(bkc<18){
        QString str = "Adınız : " +textAd +"\nYaşiniz : " +textYas;
        ui->labelInformation->setText(str +"\nKilo Endexi : " +QString::number(bkc) +"\nBiraz dada iyi beslenin.");

    }else if(bkc>18 && bkc<25){
        QString str = "Adınız : " +textAd +"\nYaşiniz : " +textYas;
        ui->labelInformation->setText(str +"\nKilo Endexi : " +QString::number(bkc) +"\nYemeklerinize dikat edinve yiyebilirsiniz.");

    }else if(bkc>25 && bkc<30){
        QString str = "Adınız : " +textAd +"\nYaşiniz : " +textYas;
        ui->labelInformation->setText(str +"\nKilo Endexi : " +QString::number(bkc) +"\nYemeklerinize dikat edin ve kilo yapan yiyyecekler yemeyin.");
    }
    else if(bkc>30 && bkc<35){
        QString str = "Adınız : " +textAd +"\nYaşiniz : " +textYas;
        ui->labelInformation->setText(str +"\nKilo Endexi : " +QString::number(bkc) +"\nRejim  yapınız");

    }else{
        QString str = "Adınız : " +textAd +"\nYaşiniz : " +textYas;
        ui->labelInformation->setText(str +"\nKilo Endexi : " +QString::number(bkc) +"\nSonunuz Kötü.");

    }
    return;
}

void MainWindow::on_pushButton_2_clicked()
{


}
