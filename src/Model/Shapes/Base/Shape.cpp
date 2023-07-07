#include "Shape.h"

Shape::Shape(const QRect& rect,
             const QBrush& brush,
             const QPen& pen) :
    m_rect(rect),
    m_brush(brush),
    m_pen(pen)
{}

void Shape::draw(QPainter* painter) {
    painter->setBrush(m_brush);
    painter->setPen(m_pen);

    drawImpl(painter);
}
