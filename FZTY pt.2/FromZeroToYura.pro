QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    character.cpp \
    clothes.cpp \
    food.cpp \
    happiness.cpp \
    health.cpp \
    housing.cpp \
    job.cpp \
    main.cpp \
    mainwindow.cpp \
    relationship.cpp \
    transport.cpp

HEADERS += \
    character.h \
    clothes.h \
    food.h \
    happiness.h \
    health.h \
    housing.h \
    job.h \
    mainwindow.h \
    relationship.h \
    transport.h

FORMS += \
    clothes.ui \
    food.ui \
    happiness.ui \
    health.ui \
    housing.ui \
    job.ui \
    mainwindow.ui \
    relationship.ui \
    transport.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
