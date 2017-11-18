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
	QPoint mousePoint;      //鼠标相对于窗体的位置
	bool isMousePressed;    //鼠标是否按下
protected:
	virtual void mousePressEvent(QMouseEvent *event);  //鼠标按下事件
	virtual void mouseMoveEvent(QMouseEvent *event);   //窗体拖动事件
	virtual void mouseReleaseEvent(QMouseEvent *event);//鼠标释放事件
private  slots:
void Open_Main();
};
