	
#include "my_painter.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    My_Painter w;
    w.show();

    return a.exec();
}
