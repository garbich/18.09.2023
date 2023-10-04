#pragma once
#include <iostream>
#include "Camera.h"
#include "Component.h"
#include "Screen.h"
using namespace std;

class MobilePhone
{
private:
	string button;
	Component* screen = new Screen();
	Component* camera = new Camera();
	
public:
	void on();
	void off();

	string getButton();

	void setButton(string button);

	void pressButton(string button);
};

