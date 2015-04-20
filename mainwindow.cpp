#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QLabel"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QImage *seriesl = new QImage;
    QImage *seriesl_scaled = new QImage;
    seriesl->load(":/MyPng/id.png");
    *seriesl_scaled=seriesl->scaled(300,300,Qt::KeepAspectRatio);
    QLabel *label_0 = new QLabel;
    label_0->setPixmap(QPixmap::fromImage(*seriesl_scaled));


    QImage *seriesl_1 = new QImage;
    QImage *seriesl_scaled_1 = new QImage;
    seriesl_1->load(":/MyPng/map.png");
    *seriesl_scaled_1=seriesl_1->scaled(300,350,Qt::KeepAspectRatio);
    QLabel *label_1 = new QLabel;
    label_1->setPixmap(QPixmap::fromImage(*seriesl_scaled_1));


    QImage *route = new QImage;
    QImage *route_scaled = new QImage;
    route->load(":/MyPng/route.png");
    *route_scaled=route->scaled(300,350,Qt::KeepAspectRatio);
    QLabel *label_2 = new QLabel;
    label_2->setPixmap(QPixmap::fromImage(*route_scaled));

    ui->verticalLayout->addWidget(label_0);
    ui->verticalLayout_5->addWidget(label_1);
    ui->verticalLayout_7->addWidget(label_2);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->tabWidget->setCurrentWidget(ui->tab_2);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->tabWidget->setCurrentWidget(ui->tab_3);
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->tabWidget->setCurrentWidget(ui->tab_4);
}
