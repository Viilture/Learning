#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSlider>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public slots:
    void zoomIn(int level = 1);
    void zoomOut(int level = 1);


private:
    Ui::MainWindow *ui;


private slots:

    void setupMatrix();


private:

    QSlider *zoomSlider;
    QSlider *rotateSlider;
};
#endif // MAINWINDOW_H
