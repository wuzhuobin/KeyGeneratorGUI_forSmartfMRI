#ifndef KEYGENERATORGUI_H
#define KEYGENERATORGUI_H

#include <QtWidgets/QMainWindow>
#include<QProcess>
#include<QDebug>
#include "ui_keygeneratorgui.h"

class KeyGeneratorGUI : public QMainWindow
{
	Q_OBJECT

public:
	KeyGeneratorGUI(QWidget *parent = 0);
	~KeyGeneratorGUI();

	public slots:
	void keyGenerate();
private:
	Ui::KeyGeneratorGUIClass ui;
};

#endif // KEYGENERATORGUI_H
