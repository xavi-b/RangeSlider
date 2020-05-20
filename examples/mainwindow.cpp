#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QHBoxLayout* layout = new QHBoxLayout;
    layout->addWidget(new XB::RangeSlider);
    layout->addWidget(new XB::RangeSlider(Qt::Horizontal));
    QWidget* w = new QWidget;
    w->setLayout(layout);
    setCentralWidget(w);
}

MainWindow::~MainWindow()
{

}
