#include "keygeneratorgui.h"

KeyGeneratorGUI::KeyGeneratorGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->connect(this->ui.generatePushButton, SIGNAL(clicked()), this, SLOT(keyGenerate()) );
}

KeyGeneratorGUI::~KeyGeneratorGUI()
{

}

void KeyGeneratorGUI::keyGenerate() {

	QString mac = this->ui.licenseLineEdit->text();
	if (mac.length() == 17) {
		QList<QString> arg;
		arg << "-m";
		arg << mac;
		qDebug() << arg;
		qDebug() << QProcess::execute("KeyGenerator.exe", arg);
	}
	


}
