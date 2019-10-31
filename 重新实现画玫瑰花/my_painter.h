#ifndef MY_PAINTER_H
#define MY_PAINTER_H

#include <QWidget>
#include <QPainter>
//安卓手机中使用
//#include <conio.h>
#include <stdio.h>
//Linux上使用
#include <curses.h>
#include <unistd.h>
//Windows下使用
//#include <synchapi.h>
#include <math.h>



// 定义结构体
struct DOT
{
	double x;
	double y;
	double z;
	double r;	// 红色
	double g;	// 绿色
	// b(蓝色) 通过 r 计算
};
class My_Painter : public QWidget
{
    Q_OBJECT
    
public:
    My_Painter(QWidget *parent = 0);
    ~My_Painter();
    
// 定义全局变量
int	rosesize = 500;
int	h = -250;

    
    protected :
    void paintEvent(QPaintEvent *event);
    	// 计算点
bool calc(double a, double b, double c, DOT &d);
    private :
    int H ;
};

#endif // WIDGET_H
