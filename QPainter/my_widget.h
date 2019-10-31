#ifndef MY_WIDGET_H
#define MY_WIDGET_H

#include <QWidget>

class My_Widget:public QWidget
{
    Q_OBJECT
public:
   explicit My_Widget(QWidget *parent=0);
    ~ My_Widget();
    private :
 
};

#endif // MY_PAINTER_H