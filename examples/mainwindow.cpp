#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QHBoxLayout* layout = new QHBoxLayout;
    layout->addWidget(new RangeSlider);
    layout->addWidget(new RangeSlider(Qt::Horizontal));
    QWidget* w = new QWidget;
    w->setLayout(layout);
    setCentralWidget(w);
}

MainWindow::~MainWindow()
{

}
