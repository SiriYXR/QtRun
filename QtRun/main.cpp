//=============================
//�������ƣ�QtRun
//�汾�ţ�1.0
//�����ˣ�������
//
//����ʱ�䣺2017-5-29 15:38:46
//�깤ʱ�䣺2017-5-30 23:04:00
//��������171��
//�������ڣ�2 ��
//
//������־��
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
