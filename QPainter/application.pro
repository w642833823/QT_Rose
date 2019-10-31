
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES +=  main.cpp\
            my_widget.cpp\
            my_painter.cpp

HEADERS  += my_widget.h\
             my_painter.h
              #解决参数未使用的方法
QMAKE_CXXFLAGS+=-Wno-unused-parameter
CONFIG += warn_off      #关闭警告
      

###指定moc命令将含Q_OBJECT的头文件转换成标准.h文件的存放目录       
MOC_DIR=$$PWD/../temp/moc
RCC_DIR=$$PWD/../temp/rcc
UI_DIR=$$PWD/../temp/ui
OBJECTS_DIR=$$PWD/../temp/obj
DESTDIR=$$PWD/../temp/bin