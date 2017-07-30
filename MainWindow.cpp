#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QHBoxLayout* layout = new QHBoxLayout;
    layout->addWidget(new RangeWidget);
    layout->addWidget(new RangeWidget(Qt::Horizontal));
    QWidget* w = new QWidget;
    w->setLayout(layout);
    setCentralWidget(w);
}

MainWindow::~MainWindow()
{

}
