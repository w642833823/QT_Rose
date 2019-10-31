#include <my_painter.h>
//#include "my_widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
  /*  My_Widget w;
     w.show();*/
     
   My_Painter p;
   p.show();

    return a.exec();
}