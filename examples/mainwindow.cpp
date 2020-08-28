#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QHBoxLayout* layout = new QHBoxLayout;
    layout->addWidget(new XB::RangeSlider);
    auto example = new XB::RangeSlider(Qt::Horizontal);
    example->setDisabled(true);
    layout->addWidget(example);
    QWidget* w = new QWidget;
    w->setLayout(layout);
    setCentralWidget(w);
}

MainWindow::~MainWindow()
{

}
