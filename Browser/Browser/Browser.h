#pragma once

#include <QtWidgets/QDialog>
#include "ui_Browser.h"

class Browser : public QDialog
{
	Q_OBJECT

public:
	Browser(QWidget *parent = Q_NULLPTR);
	virtual void mousePressEvent(QMouseEvent *event);  //鼠标按下事件
	virtual void mouseMoveEvent(QMouseEvent *event);   //窗体拖动事件
	virtual void mouseReleaseEvent(QMouseEvent *event);//鼠标释放事件

private:
	Ui::BrowserClass ui;
	QPoint mousePoint;      //鼠标相对于窗体的位置
	bool isMousePressed;    //鼠标是否按下

private slots:
void C_Load();
void JaZai(int a);
void Return_WebTItle(const QString &title);
};
