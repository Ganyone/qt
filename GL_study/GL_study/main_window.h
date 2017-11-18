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
	QPoint mousePoint;      //鼠标相对于窗体的位置
	bool isMousePressed;    //鼠标是否按下
protected:
	virtual void mousePressEvent(QMouseEvent *event);  //鼠标按下事件
	virtual void mouseMoveEvent(QMouseEvent *event);   //窗体拖动事件
	virtual void mouseReleaseEvent(QMouseEvent *event);//鼠标释放事件
private slots:
void Open_0();
void Open_1();
void Open_2();
void Open_3();
void Open_4();
void Open_webkit();



};
