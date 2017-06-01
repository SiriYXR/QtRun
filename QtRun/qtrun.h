#ifndef QTRUN_H
#define QTRUN_H

#include "ui_QtRun.h"

#include <QtWidgets/QWidget>


class QtRun : public QWidget
{
	Q_OBJECT

public:
	QtRun(QWidget *parent = 0);
	~QtRun();

private:
	void keyPressEvent(QKeyEvent *e)override;
	void paintEvent(QPaintEvent *e)override;

	void init_connect();
	void on_beginButton_clicked();
	void on_cancelButton_clicked();
	void on_browseButton_clicked();

private:
	Ui::QtRunClass ui;
};

#endif // QTRUN_H
