#pragma once

#include <QMainWindow>

#include "../Model/OpenGLWidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;

private:
    enum class EToolType {
        Pen,
        Ellipse,
        Rectungle
    };

    void initConnections();

    Ui::MainWindow *ui;

    OpenGLWidget* m_canvas = new OpenGLWidget(this);
    EToolType m_selectedTool = EToolType::Ellipse;
    QPoint m_mousePressPosition;
};
