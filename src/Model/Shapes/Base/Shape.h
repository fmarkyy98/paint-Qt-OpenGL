#pragma once

#include <QPainter>

class Shape
{
public:
    explicit Shape(const QRect& rect,
                   const QBrush& brush,
                   const QPen& pen);
    virtual ~Shape() = default;

    void draw(QPainter* painter);

protected:
    virtual void drawImpl(QPainter* painter) = 0;

    QRect m_rect;

private:
    QBrush m_brush;
    QPen m_pen;
};
