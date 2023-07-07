#include "OpenGLWidget.h"

#include <QPainter>
#include <QPen>

OpenGLWidget::OpenGLWidget(QWidget* parent) :
    QOpenGLWidget(parent)
{}

void OpenGLWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    painter.begin(this);
    painter.setRenderHint(QPainter::Antialiasing);
    drawEllipse(&painter);
    painter.end();
}

void OpenGLWidget::drawEllipse(QPainter* painter)
{
    auto brush = QBrush(QColor(65, 205, 82));
    auto pen = QPen(Qt::black);
    pen.setWidth(1);
    painter->setBrush(brush);
    painter->setPen(pen);

    painter->drawEllipse(10, 10, 30, 30);
}
