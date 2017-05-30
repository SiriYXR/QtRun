//=============================
//程序名称：QtRun
//版本号：1.0
//制作人：杨新瑞
//
//创建时间：2017-5-29 15:38:46
//完工时间：2017-5-30 23:04:00
//代码量：171行
//制作周期：2 天
//
//更新日志：
//
//=============================

#include "qtrun.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtRun w;
	w.show();
	return a.exec();
}
