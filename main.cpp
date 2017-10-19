#include "liulangqi.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	liulangqi w;
	w.show();
	return a.exec();
}
