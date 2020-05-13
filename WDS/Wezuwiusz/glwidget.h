#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QGLWidget>
#include <QtOpenGL>

#include <Qt3DExtras/QTorusMesh>
#include <QtCore/QObject>

#include <Qt3DCore/qentity.h>
#include <Qt3DCore/qtransform.h>
#include <Qt3DExtras/QPlaneMesh>
#include <Qt3DExtras/QGoochMaterial>



class GLWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit GLWidget(QWidget *parent = nullptr);
    void initializeGL() override;
    void drawMouse(double r, double d, int lats, int longs);
    void paintGL() override;

};

#endif // GLWIDGET_H
