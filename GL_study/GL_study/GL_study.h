#pragma once

#include <QtWidgets/QDialog>
#include "ui_GL_study.h"

class GL_study : public QDialog
{
	Q_OBJECT

public:
	GL_study(QWidget *parent = Q_NULLPTR);

private:
	Ui::GL_studyClass ui;
	QPoint mousePoint;      //�������ڴ����λ��
	bool isMousePressed;    //����Ƿ���
	
protected:
	virtual void mousePressEvent(QMouseEvent *event);  //��갴���¼�
	virtual void mouseMoveEvent(QMouseEvent *event);   //�����϶��¼�
	virtual void mouseReleaseEvent(QMouseEvent *event);//����ͷ��¼�
private slots:
void Creat_main_window();
};
