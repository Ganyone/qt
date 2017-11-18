#include "bilimiao.h"
#include <QMouseEvent>
#include "MainGui.h"
bilimiao::bilimiao(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::FramelessWindowHint);
	connect(ui.b_youke, SIGNAL(clicked()), this, SLOT(Open_Main()));
}
//鼠标按下事件
void bilimiao::mousePressEvent(QMouseEvent *event)
{
	mousePoint = event->pos();    //鼠标相对于窗体的位置
	isMousePressed = true;        //鼠标按下
	event->accept();
}

//窗体拖动事件
void bilimiao::mouseMoveEvent(QMouseEvent *event)
{
	//若鼠标左键被按下
	if (isMousePressed == true)
	{
		//鼠标相对于屏幕的位置
		QPoint curMousePoint = event->globalPos() - mousePoint;
		//移动主窗体位置
		move(curMousePoint);
	}
	event->accept();
}

//鼠标释放事件
void bilimiao::mouseReleaseEvent(QMouseEvent *event)
{
	//鼠标未按下
	isMousePressed = false;
	event->accept();
}

void bilimiao::Open_Main()
{
	QDialog *P = new MainGui();
	P->show();
	this->close();
}
