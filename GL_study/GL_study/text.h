#pragma once

#include <QDialog>
#include "ui_text.h"

class text : public QDialog
{
	Q_OBJECT

public:
	text(QWidget *parent = Q_NULLPTR);
	~text();

private:
	Ui::text ui;
};
