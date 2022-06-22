#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./tetsDB.db");

    if(db.open())
    {
        qDebug() << "Open";
    }
    else
    {
        qDebug() << "NoOpen";
    }

    query = new QSqlQuery();
    query->exec("CREATE TABLE TelephoneBook(Firstname TEXT, Lastname TEXT, Telephone INT);");

    model = new QSqlTableModel(this, db);
    model->setTable("TelephoneBook");
    model->select();


    ui->tableView->setModel(model);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    qDebug() << model->insertRow(model->rowCount());
}

