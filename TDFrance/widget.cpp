#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    bd=QSqlDatabase::addDatabase("QMYSQL");
        /*
        bd.setHostName("172.18.58.8");
        bd.setDatabaseName("france2018");
        bd.setUserName("snir");
        bd.setPassword("snir");
        */
    QFileInfo conf("confbdd.ini");
    if(conf.exists() && conf.isFile()){
        QSettings params("confbdd.ini",QSettings::IniFormat);
        bd.setHostName(params.value("confBdd/adresse").toString());
        bd.setDatabaseName(params.value("confBdd/nombase").toString());
        bd.setUserName(params.value("confBdd/login").toString());
        bd.setPassword(params.value("confBdd/mdp").toString());
    }
    if (!bd.open())
    {
        qDebug()<<bd.lastError().text();
    }
    else
    {
        qDebug()<<"acces bdd correct runil!";
    }
    ui->pushButtonConnect->hide();

}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_pushButtonConnect_clicked()
{
}


void Widget::on_pushButtonAvoirnomDepartement_clicked()
{
    QSqlQuery requetePreparee;
    requetePreparee.prepare("select name from departments where code like :codeDept; ");
    QString nomDepartement;
    requetePreparee.bindValue(":codeDept",ui->lineEditCode->text());
    if (!requetePreparee.exec())
    {
        qDebug()<<requetePreparee.lastError().text();
    }

    while(requetePreparee.next())
    {
        nomDepartement=requetePreparee.value("name").toString();
        ui->labelDepartement->setText(nomDepartement);
    }
}

