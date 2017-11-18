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
//��갴���¼�
void bilimiao::mousePressEvent(QMouseEvent *event)
{
	mousePoint = event->pos();    //�������ڴ����λ��
	isMousePressed = true;        //��갴��
	event->accept();
}

//�����϶��¼�
void bilimiao::mouseMoveEvent(QMouseEvent *event)
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
void bilimiao::mouseReleaseEvent(QMouseEvent *event)
{
	//���δ����
	isMousePressed = false;
	event->accept();
}

void bilimiao::Open_Main()
{
	QDialog *P = new MainGui();
	P->show();
	this->close();
}
