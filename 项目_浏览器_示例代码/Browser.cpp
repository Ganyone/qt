#include "Browser.h"
#include <QWebEngineView> 
#include <QMouseEvent>
#include <QGraphicsDropShadowEffect>
#include <QtWinExtras/QtWinExtras>
Browser::Browser(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.B_load, SIGNAL(clicked()), this, SLOT(C_Load()));
	connect(ui.webEngineView, SIGNAL(loadProgress(int)), this, SLOT(JaZai(int)));
	connect(ui.B_Refresh, SIGNAL(clicked()), this, SLOT(C_Load()));


/*	QtWin::extendFrameIntoClientArea(this, -1, -1, -1, -1);*/
// 	this->setAttribute(Qt::WA_TranslucentBackground, true);
// 	this->setAttribute(Qt::WA_NoSystemBackground, false);
// 	setStyleSheet("#liulangqiClass{background:transparent;}");
}
//鼠标按下事件
void Browser::mousePressEvent(QMouseEvent *event)
{
	mousePoint = event->pos();    //鼠标相对于窗体的位置
	isMousePressed = true;        //鼠标按下
	event->accept();
}

//窗体拖动事件
void Browser::mouseMoveEvent(QMouseEvent *event)
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
void Browser::mouseReleaseEvent(QMouseEvent *event)
{
	//鼠标未按下
	isMousePressed = false;
	event->accept();
}
void Browser::C_Load()
{
	QString a = ui.LE_wangye->text();
	ui.webEngineView->load(a);
}

void Browser::JaZai(int a)
{
	QString aa = QString::fromLocal8Bit("已经加载") + QString::number(a) + "%";
	this->setWindowTitle(aa);
}
