QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 debug

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
INCLUDEPATH += $$PWD/../UpdateTimeAppLib \
               $$PWD/../../../build-DE-Desktop_Qt_5_14_1_MinGW_64_bit-Debug/UpdateTimeApp/UpdateTimeAppLib \
               $$PWD/../../libs/PanelsLib \
               $$PWD/../../../build-DE-Desktop_Qt_5_14_1_MinGW_64_bit-Debug/libs/PanelsLib

DEPENDPATH += $${INCLUDEPATH}

SOURCES += \
    main.cpp

HEADERS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

#unix:!macx: LIBS += -L$$PWD/../../../build-DE-Desktop_Qt_5_14_1_MinGW_64_bit-Debug/apps/UpdateTimeApp/UpdateTimeAppLib/ -lUpdateTimeAppLib



win32: LIBS += -L$$PWD/../../../build-DE-Desktop_Qt_5_14_1_MinGW_64_bit-Debug/UpdateTimeApp/UpdateTimeAppLib/ -lUpdateTimeAppLib

INCLUDEPATH += $$PWD/../../../build-DE-Desktop_Qt_5_14_1_MinGW_64_bit-Debug/UpdateTimeApp/UpdateTimeAppLib
DEPENDPATH += $$PWD/../../../build-DE-Desktop_Qt_5_14_1_MinGW_64_bit-Debug/UpdateTimeApp/UpdateTimeAppLib

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../../../build-DE-Desktop_Qt_5_14_1_MinGW_64_bit-Debug/UpdateTimeApp/UpdateTimeAppLib/UpdateTimeAppLib.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/../../../build-DE-Desktop_Qt_5_14_1_MinGW_64_bit-Debug/UpdateTimeApp/UpdateTimeAppLib/libUpdateTimeAppLib.a

win32: LIBS += -L$$PWD/../../../build-DE-Desktop_Qt_5_14_1_MinGW_64_bit-Debug/libs/PanelsLib/ -lPanelsLib

INCLUDEPATH += $$PWD/../../../build-DE-Desktop_Qt_5_14_1_MinGW_64_bit-Debug/libs/PanelsLib
DEPENDPATH += $$PWD/../../../build-DE-Desktop_Qt_5_14_1_MinGW_64_bit-Debug/libs/PanelsLib

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/../../../build-DE-Desktop_Qt_5_14_1_MinGW_64_bit-Debug/libs/PanelsLib/PanelsLib.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/../../../build-DE-Desktop_Qt_5_14_1_MinGW_64_bit-Debug/libs/PanelsLib/libPanelsLib.a
