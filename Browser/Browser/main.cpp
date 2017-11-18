#include "Browser.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Browser w;

	w.show();
	w.setWindowFlags(Qt::Widget);
	w.show();
	return a.exec();
}
