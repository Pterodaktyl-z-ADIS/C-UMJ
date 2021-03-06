
QT       += core gui
QT      += network
QT       += core gui \
            network \
            opengl \
            3dcore 3drender 3dinput 3dextras

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

LIBS   += -lopengl32

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    glwidget.cpp \
    main.cpp \
    screen_rob.cpp \
    screen_sim.cpp \
    screen_welcome.cpp \
    server.cpp \
    thread.cpp

HEADERS += \
    glwidget.h \
    screen_rob.h \
    screen_sim.h \
    screen_welcome.h \
    server.h \
    thread.h

FORMS += \
    screen_rob.ui \
    screen_sim.ui \
    screen_welcome.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
