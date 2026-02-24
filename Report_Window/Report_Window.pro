QT       += core gui charts printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

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
    ../../../Downloads/factorypattern/report_window/graph_factory/abstractGraph.cpp \
    ../../../Downloads/factorypattern/report_window/graph_factory/barChart.cpp \
    ../../../Downloads/factorypattern/report_window/graph_factory/graphFactory.cpp \
    ../../../Downloads/factorypattern/report_window/graph_factory/lineChart.cpp \
    ../../../Downloads/factorypattern/report_window/graph_factory/pieChart.cpp \
    ../../../Downloads/factorypattern/report_window/qcustomplot/qcustomplot.cpp \
    datewindow.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ../../../Downloads/factorypattern/json-develop/include/nlohmann/json.hpp \
    ../../../Downloads/factorypattern/report_window/graph_factory/abstractGraph.h \
    ../../../Downloads/factorypattern/report_window/graph_factory/barChart.h \
    ../../../Downloads/factorypattern/report_window/graph_factory/graphFactory.h \
    ../../../Downloads/factorypattern/report_window/graph_factory/lineChart.h \
    ../../../Downloads/factorypattern/report_window/graph_factory/pieChart.h \
    ../../../Downloads/factorypattern/report_window/qcustomplot/qcustomplot.h \
    datewindow.h \
    mainwindow.h

INCLUDEPATH += ../../../Downloads/factorypattern/report_window/graph_factory

INCLUDEPATH += ../../../Downloads/factorypattern/json-develop/include/nlohmann


FORMS += \
       datewindow.ui \
       mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

