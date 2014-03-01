#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;


private slots:
    void setCurrentGlWidget();
    void rotateOneStep();

private:
     enum { NumRows = 2, NumColumns = 3 };

     GLWidget *glWidgets[NumRows][NumColumns];
     GLWidget *currentGlWidget;
};

#endif // MAINWINDOW_H
