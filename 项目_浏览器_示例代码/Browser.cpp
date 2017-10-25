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
//��갴���¼�
void Browser::mousePressEvent(QMouseEvent *event)
{
	mousePoint = event->pos();    //�������ڴ����λ��
	isMousePressed = true;        //��갴��
	event->accept();
}

//�����϶��¼�
void Browser::mouseMoveEvent(QMouseEvent *event)
{
	//��������������
	if (isMousePressed == true)
	{
		//����������Ļ��λ��
		QPoint curMousePoint = event->globalPos() - mousePoint;
		//�ƶ�������λ��
		move(curMousePoint);
	}
	event->accept();
}

//����ͷ��¼�
void Browser::mouseReleaseEvent(QMouseEvent *event)
{
	//���δ����
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
	QString aa = QString::fromLocal8Bit("�Ѿ�����") + QString::number(a) + "%";
	this->setWindowTitle(aa);
}
