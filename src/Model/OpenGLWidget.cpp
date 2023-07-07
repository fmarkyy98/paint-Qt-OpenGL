#include "OpenGLWidget.h"

#include <QPainter>
#include <QPen>

#include "Shapes/Circle.h"

OpenGLWidget::OpenGLWidget(QWidget* parent) :
    QOpenGLWidget(parent)
{}

void OpenGLWidget::paintEvent(QPaintEvent *event)
{
    qDebug() << "OpenGLWidget::paintEvent";
    QPainter painter;
    painter.begin(this);
    painter.setRenderHint(QPainter::Antialiasing);

    for (auto&& shape : m_shapes)
        shape->draw(&painter);

    painter.end();
}

void OpenGLWidget::drawEllipse(const QRect& boundingRect)
{
    auto brush = QBrush(QColor(65, 205, 82));
    auto pen = QPen(Qt::black);
    pen.setWidth(1);

    m_shapes.push_back(std::make_unique<Circle>(boundingRect, brush, pen));

    update();
}
