#include "MobilePhone.h"


void MobilePhone::on() {
	cout << "phone was on" << endl;
}

void MobilePhone::off() {
	cout << "phone was off" << endl;
}

void MobilePhone::setButton(string button) {
	this->button = button;
}

string MobilePhone::getButton() {
	return this->button;
}

void MobilePhone::pressButton(string button) {
	if (button == "screen" || button == "Screen") {
		screen->action();
	}
	if (button == "camera" || button == "Camera") {
		camera->action();
	}
}