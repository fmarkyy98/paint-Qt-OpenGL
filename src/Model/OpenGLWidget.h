#pragma once

#include <vector>
#include <memory>

#include <QOpenGLWidget>

#include "Shapes/Base/Shape.h"

class OpenGLWidget : public QOpenGLWidget
{
    Q_OBJECT
public:
    explicit OpenGLWidget(QWidget* parent = nullptr);

    void drawEllipse(const QRect& boundingRect);

protected:
    void paintEvent(QPaintEvent* event) override;

private:
    std::vector<std::unique_ptr<Shape>> m_shapes;
};
