#include <iostream>
#include "MobilePhone.h"
using namespace std;

int main()
{
	MobilePhone* mobilePhone = new MobilePhone();

	mobilePhone->on();

	string button;
	cout << "press button which you want: ";
	cin >> button;

	mobilePhone->pressButton(button);

	mobilePhone->off();

}

