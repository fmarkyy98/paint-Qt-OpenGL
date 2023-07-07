#include "Circle.h"

Circle::Circle(const QRect &boundingRect,
               const QBrush& brush,
               const QPen& pen) :
    Shape(boundingRect, brush, pen)
{}

void Circle::drawImpl(QPainter* painter)
{
    painter->drawEllipse(m_rect);
}
