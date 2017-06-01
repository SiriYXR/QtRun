#pragma once
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QPixmap>
#include <QPainter>

QT_BEGIN_NAMESPACE

class Ui_QtRunClass
{
public:
	QPainter *painter;

	QPixmap backgrundPixmap;

	QPixmap Run_Picture;

	QLabel *run_pictureLabel;
	QLabel *backgrundLabel;
	QLabel *inforLabel;
	QLabel *openLabel;

	QLineEdit *lineEdit;

	QPushButton *beginButton;
	QPushButton *cancelButton;
	QPushButton *browseButton;

public:



	void setupUi(QWidget *QtRunClass)
	{
		if (QtRunClass->objectName().isEmpty())
			QtRunClass->setObjectName(QStringLiteral("QtRunClass"));
		QtRunClass->setFixedSize(395, 200);
		QtRunClass->setWindowIcon(QIcon(":/Picture/Run_icon"));

		

		run_pictureLabel = new QLabel(QtRunClass);
		run_pictureLabel->setPixmap(QPixmap(":/Picture/Run_icon"));
		run_pictureLabel->setGeometry(10,10,64,64);

		inforLabel = new QLabel(QtRunClass);
		inforLabel->setText("Windows will open the appropriate program, \nfolder, document or Internet resource for \nyou based on the name you entered.");
		inforLabel->setFont(QFont("Adobe Arabic", 15, QFont::Normal));
		inforLabel->setGeometry(100, 10, 300, 60);

		openLabel = new QLabel(QtRunClass);
		openLabel->setText("Open :");
		openLabel->setFont(QFont("Adobe Arabic", 15, QFont::Normal));
		openLabel->setGeometry(20, 90, 50, 20);

		lineEdit = new QLineEdit(QtRunClass);
		lineEdit->setGeometry(70, 90, 300, 20);

		beginButton = new QPushButton(QtRunClass);
		beginButton->setText("Begin");
		beginButton->setGeometry(105, 150, 90, 30);

		cancelButton = new QPushButton(QtRunClass);
		cancelButton->setText("Cancel");
		cancelButton->setGeometry(200, 150, 90, 30);

		browseButton = new QPushButton(QtRunClass);
		browseButton->setText("Browse");
		browseButton->setGeometry(295, 150, 90, 30);


		retranslateUi(QtRunClass);

		QMetaObject::connectSlotsByName(QtRunClass);
	} // setupUi

	void retranslateUi(QWidget *QtRunClass)
	{
		QtRunClass->setWindowTitle(QApplication::translate("QtRunClass", "QtRun", Q_NULLPTR));
	} // retranslateUi

};

namespace Ui {
	class QtRunClass : public Ui_QtRunClass {};
} // namespace Ui

QT_END_NAMESPACE