#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qdebug.h"
#include "QGraphicsScene"
#include "QPen"
#include "QVBoxLayout"
#include "QToolButton"
#include "QSlider"
#include "QVBoxLayout"
#include "QVBoxLayout"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGraphicsScene *New_scene = new QGraphicsScene();

    ui->graphicsView->setScene(New_scene);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing, false);
    ui->graphicsView->setDragMode(QGraphicsView::RubberBandDrag);
    ui->graphicsView->setOptimizationFlags(QGraphicsView::DontSavePainterState);
    ui->graphicsView->setViewportUpdateMode(QGraphicsView::SmartViewportUpdate);
    ui->graphicsView->setTransformationAnchor(QGraphicsView::AnchorUnderMouse);

    QPen red(Qt::red);

    New_scene->addLine(111,111,222,222,red);

    zoomSlider = new QSlider;
    zoomSlider->setMinimum(0);
    zoomSlider->setMaximum(500);
    zoomSlider->setValue(250);
    zoomSlider->setTickPosition(QSlider::TicksRight);

    connect(zoomSlider, &QAbstractSlider::valueChanged, this, &MainWindow::setupMatrix);
   // connect(rotateSlider, &QAbstractSlider::valueChanged, this, &MainWindow::setupMatrix);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupMatrix()
{
    qreal scale = qPow(qreal(2), (zoomSlider->value() - 250) / qreal(50));

    QTransform matrix;
    matrix.scale(scale, scale);
    matrix.rotate(rotateSlider->value());

    ui->graphicsView->setTransform(matrix);
    //setResetButtonEnabled();
}


void  MainWindow::zoomIn(int level)
{
    zoomSlider->setValue(zoomSlider->value() + level);
}
