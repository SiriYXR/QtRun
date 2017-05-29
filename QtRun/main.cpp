#include "qtrun.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtRun w;
	w.show();
	return a.exec();
}
