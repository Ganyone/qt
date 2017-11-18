#pragma once

#include <QtWidgets/QDialog>
#include "ui_Browser.h"

class Browser : public QDialog
{
	Q_OBJECT

public:
	Browser(QWidget *parent = Q_NULLPTR);
	virtual void mousePressEvent(QMouseEvent *event);  //��갴���¼�
	virtual void mouseMoveEvent(QMouseEvent *event);   //�����϶��¼�
	virtual void mouseReleaseEvent(QMouseEvent *event);//����ͷ��¼�

private:
	Ui::BrowserClass ui;
	QPoint mousePoint;      //�������ڴ����λ��
	bool isMousePressed;    //����Ƿ���

private slots:
void C_Load();
void JaZai(int a);
void Return_WebTItle(const QString &title);
};
