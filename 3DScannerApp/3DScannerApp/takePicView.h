#ifndef TAKEPICVIEW_H
#define TAKEPICVIEW_H

//#include "scanController.h"
#include "stdafx.h"
#include <qdialog.h>

using namespace::cv;
class QLabel;
class QTimer;
class QPushButton;
class QGridLayout;
class QBoxLayout;

class ScanController;

class TakePicView : public QDialog
{
    Q_OBJECT

private:
	QLabel * titleLabel;
	QLabel * videoLabel;
	QLabel * picProgressLabel;
	QLabel * messageLabel;
	QTimer * timer;
	QPushButton * takePicButton;
	QPushButton * cancelButton;
	QBoxLayout * mainLayout;
	QGridLayout * buttonLayout;
	VideoCapture capture;
	Mat image;
public:
    explicit TakePicView(int calibType, QWidget *parent = 0);

protected:
	void closeEvent(QCloseEvent * event);
private slots:
	void displayVideoFrame();
	void takePicture();
	void stopVideo();
};

#endif