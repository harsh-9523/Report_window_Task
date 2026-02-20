#include "mainwindow.h"
#include <QApplication>
#include<QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    QFile file(":/style.qss");
//    file.open(QFile::ReadOnly);
//    a.setStyleSheet(file.readAll());

    MainWindow w;
    w.showMaximized();   // FULL SCREEN
    return a.exec();
}
