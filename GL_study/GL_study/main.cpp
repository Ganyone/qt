#include "GL_study.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GL_study w;
	w.show();
	return a.exec();
}
