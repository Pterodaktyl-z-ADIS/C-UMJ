

#include "glwidget.h"

GLWidget::GLWidget(QWidget *parent) : QGLWidget(parent){}

void GLWidget::initializeGL(){
glClearColor(1,1,1,1);
glEnable(GL_DEPTH_TEST);
GLfloat light_position[] = {1.0, 1.0, 1.0, 0.0};
glLightfv(GL_LIGHT0, GL_POSITION, light_position);
glEnable(GL_LIGHT0);
glEnable(GL_LIGHTING);
glEnable(GL_COLOR_MATERIAL);
}

void GLWidget::drawMouse(double r, double d, int lats, int longs){
    int i, j;
    for(i = 0; i<= lats; i++){
        double lat0 = PI
    }
}
