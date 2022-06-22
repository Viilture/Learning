QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

INCLUDEPATH += "C:/opencv/build/include"

LIBS += "C:/opencv/opencv_my_build_mingw32_73/bin/libopencv_core455.dll"
LIBS += "C:/opencv/opencv_my_build_mingw32_73/bin/libopencv_imgcodecs455.dll"
LIBS += "C:/opencv/opencv_my_build_mingw32_73/bin/libopencv_highgui455.dll"
LIBS += "C:/opencv/opencv_my_build_mingw32_73/bin/libopencv_imgproc455.dll"
