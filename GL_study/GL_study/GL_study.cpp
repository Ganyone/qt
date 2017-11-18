#include "GL_study.h"
#include <QMouseEvent>
#include "main_window.h"

GL_study::GL_study(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::FramelessWindowHint);
	connect(ui.b_load, SIGNAL(clicked()), this, SLOT(Creat_main_window()));
}


//��갴���¼�
void GL_study::mousePressEvent(QMouseEvent *event)
{
	mousePoint = event->pos();    //�������ڴ����λ��
	isMousePressed = true;        //��갴��
	event->accept();
}

//�����϶��¼�
void GL_study::mouseMoveEvent(QMouseEvent *event)
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
void GL_study::mouseReleaseEvent(QMouseEvent *event)
{
	//���δ����
	isMousePressed = false;
	event->accept();
}

void GL_study::Creat_main_window()
{
	QWidget *p = new main_window();
    p->show();
	this->close();
}

