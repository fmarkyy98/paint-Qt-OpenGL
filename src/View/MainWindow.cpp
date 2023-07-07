#include "MainWindow.h"
#include "./ui_MainWindow.h"

#include <QMouseEvent>

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

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    qDebug() << "press" << event->pos();
    m_mousePressPosition = event->pos();
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    qDebug() << "release" << event->pos();
    QPoint mouseReleasePosition = event->pos();
    QRect rect(m_mousePressPosition, mouseReleasePosition);
    m_canvas->drawEllipse(rect);
}

void MainWindow::initConnections()
{
    connect(ui->penButton, &QPushButton::clicked, this, [this] {
        m_selectedTool = EToolType::Pen;
    });
    connect(ui->circleButton, &QPushButton::clicked, this, [this] {
        m_selectedTool = EToolType::Ellipse;
    });
    connect(ui->rectButton, &QPushButton::clicked, this, [this] {
        m_selectedTool = EToolType::Rectungle;
    });
}
