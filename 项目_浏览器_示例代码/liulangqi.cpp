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
//��갴���¼�
void liulangqi::mousePressEvent(QMouseEvent *event)
{
	mousePoint = event->pos();    //�������ڴ����λ��
	isMousePressed = true;        //��갴��
	event->accept();
}

//�����϶��¼�
void liulangqi::mouseMoveEvent(QMouseEvent *event)
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
void liulangqi::mouseReleaseEvent(QMouseEvent *event)
{
	//���δ����
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
	QString aa = QString::fromLocal8Bit("�Ѿ�����") + QString::number(a)+"%";
	ui.l_jaizai->setText(aa);
}
