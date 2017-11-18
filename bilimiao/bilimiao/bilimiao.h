#pragma once

#include <QtWidgets/QDialog>
#include "ui_bilimiao.h"

class bilimiao : public QDialog
{
	Q_OBJECT

public:
	bilimiao(QWidget *parent = Q_NULLPTR);

private:
	Ui::bilimiaoClass ui;
	QPoint mousePoint;      //�������ڴ����λ��
	bool isMousePressed;    //����Ƿ���
protected:
	virtual void mousePressEvent(QMouseEvent *event);  //��갴���¼�
	virtual void mouseMoveEvent(QMouseEvent *event);   //�����϶��¼�
	virtual void mouseReleaseEvent(QMouseEvent *event);//����ͷ��¼�
private  slots:
void Open_Main();
};
