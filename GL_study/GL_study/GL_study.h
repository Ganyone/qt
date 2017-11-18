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
	QPoint mousePoint;      //鼠标相对于窗体的位置
	bool isMousePressed;    //鼠标是否按下
	
protected:
	virtual void mousePressEvent(QMouseEvent *event);  //鼠标按下事件
	virtual void mouseMoveEvent(QMouseEvent *event);   //窗体拖动事件
	virtual void mouseReleaseEvent(QMouseEvent *event);//鼠标释放事件
private slots:
void Creat_main_window();
};
