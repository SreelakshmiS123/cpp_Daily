#include<iostream>
#include"switch.h"
using namespace std;
int elseIflad() 
{
	int amtInhand;
	cout << "Enter the amount in hand: ";
	cin >> amtInhand;

	if (amtInhand < 10)
	{
		cout << "Please get more amount" << endl;
	}
	else if (amtInhand >= 10 and amtInhand <= 50)
	{
		cout << "I can order snacks" << endl;
	}
	else if (amtInhand > 50 and amtInhand <= 100)
	{
		cout << "I can order roti's" << endl;
	}
	else if (amtInhand > 100 and amtInhand < 500)
	{
		cout << "I can order complete meal" << endl;
	}
	else
	{
		cout << "I can order anything" << endl;
	}
	return 0;
}