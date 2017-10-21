#include "liulangqi.h"
#include <QMouseEvent>
#include <QGraphicsDropShadowEffect>
#include <QWebEngineView> 
#include <QString>
liulangqi::liulangqi(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::FramelessWindowHint);

	QGraphicsDropShadowEffect *shadow = new QGraphicsDropShadowEffect();
	shadow->setBlurRadius(10);
	shadow->setColor(Qt::black);
	shadow->setOffset(0);
	ui.w_haha->setGraphicsEffect(shadow);
	connect(ui.b_load, SIGNAL(clicked()), this, SLOT(linkwangye()));
	connect(ui.webEngineView, SIGNAL(loadProgress(int )), this, SLOT(jaizai(int )));

	this->setAttribute(Qt::WA_TranslucentBackground);
}
//鼠标按下事件
void liulangqi::mousePressEvent(QMouseEvent *event)
{
	mousePoint = event->pos();    //鼠标相对于窗体的位置
	isMousePressed = true;        //鼠标按下
	event->accept();
}

//窗体拖动事件
void liulangqi::mouseMoveEvent(QMouseEvent *event)
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
void liulangqi::mouseReleaseEvent(QMouseEvent *event)
{
	//鼠标未按下
	isMousePressed = false;
	event->accept();
}

void liulangqi::linkwangye()
{    

	QUrl aa = ui.lineEdit->text();
	ui.webEngineView->load(aa);
}

void liulangqi::jaizai(int a)
{
	QString aa = QString::fromLocal8Bit("已经加载") + QString::number(a)+"%";
	ui.l_jaizai->setText(aa);
}
