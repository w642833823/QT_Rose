#include "my_widget.h"
#include "my_painter.h"
#include <QTimeLine>

My_Widget::My_Widget(QWidget *parent)
    :QWidget(parent)
{
 
      My_Painter *p=new My_Painter(this );
          QTimeLine *timeLine=new QTimeLine(255,this);
    timeLine->setLoopCount(0);
    connect(timeLine,&QTimeLine::valueChanged,[p](qreal value)
    {
        static int cn;
        p->setValue(cn++);
        if (cn==255)
        {
            cn=0;
        }
    });
    timeLine->start();
}

My_Widget::~My_Widget()
{

}