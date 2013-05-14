#include "mainschool.h"
#include "Login.h"
#include "teacherswindow.h"
#include "schoolmasterwindow.h"
#include <QApplication>
#include <QtSql>

int main(int argc, char *argv[])
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("school.db");
    db.open();
    QApplication a(argc, argv);
//    mainSchool w;
//    Login log;
    log.show();
//    Teacherswindow w;
    schoolmasterwindow w;
    w.show();
    return a.exec();
}
