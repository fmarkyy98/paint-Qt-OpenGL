#pragma once

#include <QMainWindow>

#include "OpenGLWidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    void initConnections();

    Ui::MainWindow *ui;

    OpenGLWidget* m_canvas = new OpenGLWidget;
};
