#include "DotaBPMainWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	DotaBPMainWindow w;
	w.show();
	return a.exec();
}
