#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <QSqlQuery>
#include <QFileInfo>
#include <QSettings>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButtonConnect_clicked();

    void on_pushButtonAvoirnomDepartement_clicked();

private:
    Ui::Widget *ui;
    QSqlDatabase bd;
};
#endif // WIDGET_H
