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
	QPoint mousePoint;      //鼠标相对于窗体的位置
	bool isMousePressed;    //鼠标是否按下
protected:
	virtual void mousePressEvent(QMouseEvent *event);  //鼠标按下事件
	virtual void mouseMoveEvent(QMouseEvent *event);   //窗体拖动事件
	virtual void mouseReleaseEvent(QMouseEvent *event);//鼠标释放事件
	private  slots:
	void Setting();
	void PiFu();
	void Return1();
	void Return2();
	void Return_picture(bool ok);
	void Return_web();

};
