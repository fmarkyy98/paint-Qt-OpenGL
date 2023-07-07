#include "MainWindow.h"
#include "./ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->canvasLayout->addWidget(m_canvas);

    initConnections();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initConnections()
{
    connect(ui->circleButton, &QPushButton::clicked, this, [this] {
        qDebug() << "circle";
        m_canvas->update();
    });
}

