#include "my_painter.h"


My_Painter::My_Painter(QWidget *parent)
    : QWidget(parent),
    R(set_qrand(0,255)),
    H(-70)
{
	 this->setFixedSize(500,500);

}

My_Painter::~My_Painter()
{
	
	}

void My_Painter::setValue(int value)
{
    m_value=value;
    update();
}
	
	// min:随机数的最小值，max:随机数的最大值
int My_Painter::set_qrand(int min, int max)
{
    Q_ASSERT(min < max);
    // 加入随机种子。种子是当前时间距离0点0分0秒的秒数。
    // 每次启动程序，只添加一次种子，以做到数字真正随机。
    static bool seedStatus;
    if (!seedStatus)
    {
        qsrand(QTime(0, 0, 0).secsTo(QTime::currentTime()));
        seedStatus = true;
    }
    int nRandom = qrand() % (max - min);
    nRandom = min + nRandom;

    return nRandom;
}

	
	void My_Painter::paintEvent(QPaintEvent *)
	{
	   int width = this->width();
       int height = this->height();
       int side = qMin(width, height);

    //绘制准备工作,启用反锯齿
    QPainter painter(this );
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);
    //update();
		//保存painter状态
        //painter.save();
	
			
   painter.translate(width / 2, height / 2);
   painter.scale(side / 100.0, side / 100.0);
   
   	for (int a=15;a>0;a--){
   		if(a%2==0){
   				QPen pen(Qt::red,2,Qt::SolidLine,Qt::RoundCap,Qt::RoundJoin);
   			
		painter.setPen(pen);
		painter.drawEllipse(QPoint(width/2-535, height/2-933),a*2,a*2);
   	}else{
   			QPen pen_2(Qt::green,2,Qt::SolidLine,Qt::RoundCap,Qt::RoundJoin);
   painter.setPen(pen_2);
   				painter.drawEllipse(QPoint(width/2-535,height/2-933),a*2,a*2);
   		}
	}
	//	painter.restore();
		
            //painter.save();
		 	//旋转
	painter.rotate(0);
	QFont font("宋体",1,QFont::Bold,true );
	painter.setFont(font);
	painter.setPen(QColor(R,0,m_value));
	painter.drawText(-30,H,QString("Side值:%1").arg(side));
	painter.drawText(-30,H+10,QString(tr("w值:%1")).arg(width));
        //painter.save();
	//painter.rotate(-1);
	QFont font2("宋体",1,QFont::Bold,true );
	painter.setFont(font2);
	painter.setPen(Qt::gray);
	painter.drawText(-30,H+20,QString("y值:%1").arg(R));
    //painter.restore();
	
	
		}
