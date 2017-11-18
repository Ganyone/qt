#include "bilimiao.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	bilimiao w;
	w.show();
	return a.exec();
}
