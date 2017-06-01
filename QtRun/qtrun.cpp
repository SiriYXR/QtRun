#include "qtrun.h"

#include <QProcess>
#include <QPushButton>
#include <QEvent>
#include <QKeyEvent>

QtRun::QtRun(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	init_connect();

}

QtRun::~QtRun()
{

}

void QtRun::keyPressEvent(QKeyEvent *keyEvent)
{
	if (keyEvent->type() == QKeyEvent::KeyPress)
	{
		if (keyEvent->key() == Qt::Key_Enter|| keyEvent->key() == Qt::Key_Return)
		{
			on_beginButton_clicked();
			return;
		}
		if (keyEvent->key() == Qt::Key_Escape)
		{
			this->close();
			return;
		}
	}
	return QWidget::keyPressEvent(keyEvent);
}

void QtRun::paintEvent(QPaintEvent * e)
{
	ui.painter = new QPainter(this);
	ui.painter->fillRect(0, 0, 395, 130, Qt::white);

}

void QtRun::init_connect()
{
	QObject::connect(ui.beginButton, &QPushButton::clicked, this, &QtRun::on_beginButton_clicked);
	QObject::connect(ui.cancelButton, &QPushButton::clicked, this, &QtRun::on_cancelButton_clicked);
	QObject::connect(ui.browseButton, &QPushButton::clicked, this, &QtRun::on_browseButton_clicked);
}

void QtRun::on_beginButton_clicked()
{
	QProcess *Process = new QProcess;
	QString startProgram = ui.lineEdit->text();
	Process->start(startProgram.trimmed());
	ui.lineEdit->clear();
	this->close();
}

void QtRun::on_cancelButton_clicked()
{
	ui.lineEdit->clear();
}

void QtRun::on_browseButton_clicked()
{

}
