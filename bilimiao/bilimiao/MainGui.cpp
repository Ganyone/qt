#include "MainGui.h"
#include <QPainter>
#include "MainGui.h"
#include <QMouseEvent>
#include <QWebEngineView> 
#include <QDebug>
#include <QWebEnginePage>
#include <QDesktopServices>

MainGui::MainGui(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setWindowFlags(Qt::FramelessWindowHint);
	connect(ui.b_setting, SIGNAL(clicked()), this, SLOT(Setting()));
	connect(ui.b_Return1, SIGNAL(clicked()), this, SLOT(Return1()));
	connect(ui.b_Return2, SIGNAL(clicked()), this, SLOT(Return2()));
	connect(ui.b_pifu, SIGNAL(clicked()), this, SLOT(PiFu()));
	connect(ui.webEngineView, SIGNAL(loadFinished(bool ok)), this, SLOT(Return_picture()));
	connect(ui.b_pritruce, SIGNAL(clicked()), this, SLOT(Return_web()));
	ui.webEngineView->load(QUrl("https://www.bilibili.com/"));
	ui.webEngineView->show();
	
}


MainGui::~MainGui()
{
}

void MainGui::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);
	painter.setPen(QColor(0, 160, 216));
	painter.setBrush(QColor(0, 160, 216)); // ���û�ˢ��ɫ
	painter.drawRect(0, 0,185, 522);
	
}
//��갴���¼�
void MainGui::mousePressEvent(QMouseEvent *event)
{
	mousePoint = event->pos();    //�������ڴ����λ��
	isMousePressed = true;        //��갴��
	event->accept();
}

//�����϶��¼�
void MainGui::mouseMoveEvent(QMouseEvent *event)
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
void MainGui::mouseReleaseEvent(QMouseEvent *event)
{
	//���δ����
	isMousePressed = false;
	event->accept();
}

void MainGui::Setting()
{
	ui.stackedWidget->setCurrentIndex(1);
}

void MainGui::PiFu()
{
	ui.stackedWidget->setCurrentIndex(2);

}

void MainGui::Return1()
{
	ui.stackedWidget->setCurrentIndex(0);
}

void MainGui::Return2()
{
	ui.stackedWidget->setCurrentIndex(0);
}

void MainGui::Return_picture(bool ok)
{
	
}

void MainGui::Return_web()
{
	QDesktopServices::openUrl(QUrl("https://www.bilibili.com/"));

}