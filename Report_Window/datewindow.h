#ifndef DATEWINDOW_H
#define DATEWINDOW_H

#include <QMainWindow>  // Change to QMainWindow

namespace Ui {
    class DateWindow;
}

class DateWindow : public QMainWindow  // Inherit from QMainWindow
{
    Q_OBJECT

public:
    explicit DateWindow(QWidget *parent = nullptr);
    ~DateWindow();

private slots:
    void on_calendarButton_clicked();
    void on_rbCurrent_clicked();
    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::DateWindow *ui;  // UI object for the window
    void loadJsonToTableView(const QString &fileName);

};

#endif // DATEWINDOW_H
