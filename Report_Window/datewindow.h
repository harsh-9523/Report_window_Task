#ifndef DATEWINDOW_H
#define DATEWINDOW_H

#include <QMainWindow>  // Use QMainWindow, not QDialog

namespace Ui {
    class DateWindow;
}

class DateWindow : public QMainWindow  // Inherit from QMainWindow
{
    Q_OBJECT

public:
    explicit DateWindow(QWidget *parent = nullptr);
    ~DateWindow();

private:
    Ui::DateWindow *ui;
        void loadJsonToTableView(const QString &fileName);// UI object to set up the interface
};

#endif // DATEWINDOW_H
