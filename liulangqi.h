#pragma once

#include <QtWidgets/QWidget>
#include "ui_liulangqi.h"

class liulangqi : public QWidget
{
	Q_OBJECT

public:
	liulangqi(QWidget *parent = Q_NULLPTR);
	virtual void mousePressEvent(QMouseEvent *event);  //��갴���¼�
	virtual void mouseMoveEvent(QMouseEvent *event);   //�����϶��¼�
	virtual void mouseReleaseEvent(QMouseEvent *event);//����ͷ��¼�

private:
	Ui::liulangqiClass ui;

	QPoint mousePoint;      //�������ڴ����λ��
	bool isMousePressed;    //����Ƿ���
private slots:
void linkwangye();
void jaizai(int a);
};
