#ifndef QTRUN_H
#define QTRUN_H

#include <QtWidgets/QWidget>
#include "ui_qtrun.h"

class QtRun : public QWidget
{
	Q_OBJECT

public:
	QtRun(QWidget *parent = 0);
	~QtRun();

private:
	Ui::QtRunClass ui;
};

#endif // QTRUN_H
