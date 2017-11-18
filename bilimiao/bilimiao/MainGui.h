#pragma once

#include <QDialog>
#include "ui_MainGui.h"

class MainGui : public QDialog
{
	Q_OBJECT

public:
	MainGui(QWidget *parent = Q_NULLPTR);
	~MainGui();

private:
	Ui::MainGui ui;
	void paintEvent(QPaintEvent *event);
	QPoint mousePoint;      //�������ڴ����λ��
	bool isMousePressed;    //����Ƿ���
protected:
	virtual void mousePressEvent(QMouseEvent *event);  //��갴���¼�
	virtual void mouseMoveEvent(QMouseEvent *event);   //�����϶��¼�
	virtual void mouseReleaseEvent(QMouseEvent *event);//����ͷ��¼�
	private  slots:
	void Setting();
	void PiFu();
	void Return1();
	void Return2();
	void Return_picture(bool ok);
	void Return_web();

};
