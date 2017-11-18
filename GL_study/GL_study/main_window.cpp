#include "main_window.h"
#include <QPainter>
#include <QMouseEvent>
#include <QWebEngineView>
main_window::main_window(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::FramelessWindowHint);
	connect(ui.b_Head_portrait, SIGNAL(clicked()), this, SLOT(Open_0()));
	connect(ui.b_1, SIGNAL(clicked()), this, SLOT(Open_1()));
	connect(ui.b_2, SIGNAL(clicked()), this, SLOT(Open_2()));
	connect(ui.b_3, SIGNAL(clicked()), this, SLOT(Open_3()));
	connect(ui.b_Head_portrait, SIGNAL(clicked()), this, SLOT(Open_webkit()));
	ui.webEngineView_0->load(QUrl("https://www.bilibili.com/"));
}

main_window::~main_window()
{
}

void main_window::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);
	painter.setPen(QColor(38, 41, 44));
	painter.setBrush(QColor(38, 41, 44)); // 设置画刷颜色
	painter.drawRect(0, 0, 59, 522);

}
//鼠标按下事件
void main_window::mousePressEvent(QMouseEvent *event)
{
	mousePoint = event->pos();    //鼠标相对于窗体的位置
	isMousePressed = true;        //鼠标按下
	event->accept();
}

//窗体拖动事件
void main_window::mouseMoveEvent(QMouseEvent *event)
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
void main_window::mouseReleaseEvent(QMouseEvent *event)
{
	//鼠标未按下
	isMousePressed = false;
	event->accept();
}

void main_window::Open_0()
{
	ui.stackedWidget->setCurrentIndex(0);
}

void main_window::Open_1()
{
	ui.stackedWidget->setCurrentIndex(1);
}

void main_window::Open_2()
{
	ui.stackedWidget->setCurrentIndex(2);
}

void main_window::Open_3()
{
	ui.stackedWidget->setCurrentIndex(3);
}

void main_window::Open_4()
{
	ui.stackedWidget->setCurrentIndex(4);
}

void main_window::Open_webkit()
{

	
}

