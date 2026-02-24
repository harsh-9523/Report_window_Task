#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "abstractGraph.h"
#include"graphFactory.h"
#include "pieChart.h"
#include "datewindow.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_rbDate_clicked();

private:
    Ui::MainWindow *ui;
    PieChart *pieChart;
};
#endif // MAINWINDOW_H
