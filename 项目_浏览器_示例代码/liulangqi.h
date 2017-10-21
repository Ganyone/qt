#pragma once

#include <QtWidgets/QWidget>
#include "ui_liulangqi.h"

class liulangqi : public QWidget
{
	Q_OBJECT

public:
	liulangqi(QWidget *parent = Q_NULLPTR);
	virtual void mousePressEvent(QMouseEvent *event);  //鼠标按下事件
	virtual void mouseMoveEvent(QMouseEvent *event);   //窗体拖动事件
	virtual void mouseReleaseEvent(QMouseEvent *event);//鼠标释放事件

private:
	Ui::liulangqiClass ui;

	QPoint mousePoint;      //鼠标相对于窗体的位置
	bool isMousePressed;    //鼠标是否按下
private slots:
void linkwangye();
void jaizai(int a);
};
