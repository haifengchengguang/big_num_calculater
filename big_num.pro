QT       += core gui

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
    add0.cpp \
    big_numf.cpp \
    calculate.cpp \
    calculate1.cpp \
    calculate2.cpp \
    calculate3.cpp \
    function0.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    add0.h \
    big_num.h \
    calculate.h \
    calculate1.h \
    calculate2.h \
    calculate3.h \
    function0.h \
    mainwindow.h

FORMS += \
    calculate.ui \
    calculate1.ui \
    calculate2.ui \
    calculate3.ui \
    function0.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=
RC_ICONS = "logo2.ico"

RESOURCES += \
    icon.qrc
