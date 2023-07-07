#pragma once

#include "Base/Shape.h"

class Circle : public Shape
{
public:
    explicit Circle(const QRect& boundingRect,
                    const QBrush& brush,
                    const QPen& pen);
    ~Circle() override = default;

protected:
    void drawImpl(QPainter* painter) override;
};
