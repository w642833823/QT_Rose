#ifndef MY_PAINTER_H
#define MY_PAINTER_H

#include <QWidget>
#include <QPainter>
#include <QTime>
class My_Painter : public QWidget
{
    Q_OBJECT
    
public:
    My_Painter(QWidget *parent = 0);
    ~My_Painter();
        void setValue(int value);
    qreal  m_value;
      
    protected :
    void paintEvent(QPaintEvent *event);
    int set_qrand(int min,int max);
    
    private :
    int R ;
    int H;
};

#endif // WIDGET_H