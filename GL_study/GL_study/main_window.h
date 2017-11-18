#pragma once

#include <QWidget>
#include "ui_main_window.h"

class main_window : public QWidget
{
	Q_OBJECT

public:
	main_window(QWidget *parent = Q_NULLPTR);
	~main_window();

private:
	Ui::main_window ui;
	void paintEvent(QPaintEvent *event);
	QPoint mousePoint;      //�������ڴ����λ��
	bool isMousePressed;    //����Ƿ���
protected:
	virtual void mousePressEvent(QMouseEvent *event);  //��갴���¼�
	virtual void mouseMoveEvent(QMouseEvent *event);   //�����϶��¼�
	virtual void mouseReleaseEvent(QMouseEvent *event);//����ͷ��¼�
private slots:
void Open_0();
void Open_1();
void Open_2();
void Open_3();
void Open_4();
void Open_webkit();



};
