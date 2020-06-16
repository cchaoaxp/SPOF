QT += testlib gui widgets

CONFIG += qt warn_on depend_includepath testcase

TEMPLATE = app

INCLUDEPATH += $$PWD/../../UpdateTimeApp/UpdateTimeAppLib \
               $$PWD/../../libs/PanelsLib

DEPENDPATH += $${INCLUDEPATH}

SOURCES +=  \
    updateTimeTst.cpp

unix:!macx: LIBS += -L$$PWD/../../../build-data-entry-Desktop-Debug/UpdateTimeApp/UpdateTimeAppLib/ -lUpdateTimeAppLib

INCLUDEPATH += $$PWD/../../../build-data-entry-Desktop-Debug/UpdateTimeApp/UpdateTimeAppLib
DEPENDPATH += $$PWD/../../../build-data-entry-Desktop-Debug/UpdateTimeApp/UpdateTimeAppLib

unix:!macx: PRE_TARGETDEPS += $$PWD/../../../build-data-entry-Desktop-Debug/UpdateTimeApp/UpdateTimeAppLib/libUpdateTimeAppLib.a

unix:!macx: LIBS += -L$$PWD/../../../build-data-entry-Desktop-Debug/libs/PanelsLib/ -lPanelsLib

INCLUDEPATH += $$PWD/../../../build-data-entry-Desktop-Debug/libs/PanelsLib
DEPENDPATH += $$PWD/../../../build-data-entry-Desktop-Debug/libs/PanelsLib

unix:!macx: PRE_TARGETDEPS += $$PWD/../../../build-data-entry-Desktop-Debug/libs/PanelsLib/libPanelsLib.a
