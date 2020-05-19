QT             += core gui widgets
CONFIG         += c++17

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

INCLUDEPATH += $$PWD/../include
LIBS += -L$$PWD/../lib -lRangeSlider
