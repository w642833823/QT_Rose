QT       += core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = my_painter
TEMPLATE = app

SOURCES +=  main.cpp\
                          my_painter.cpp

HEADERS  +=  my_painter.h

###指定moc命令将含Q_OBJECT的头文件转换成标准.h文件的存放目录       
MOC_DIR=$$PWD/../temp/moc
RCC_DIR=$$PWD/../temp/rcc
UI_DIR=$$PWD/../temp/ui
OBJECTS_DIR=$$PWD/../temp/obj
DESTDIR=$$PWD/../temp/bin