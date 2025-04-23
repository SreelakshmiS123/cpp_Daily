#include<iostream>
#include"switch.h"
using namespace std;
int display();
int goTo()
{
	/*int v1 = 10;

	if (v1 > 10)
		goto END;
	else
		cout << "Within the limit";

END:*/
BEGIN:
	while (true) {
		int ret = display();
		switch (ret) {

		case 1:
			cout << "Addition" << endl;
			break;
		case 2:
			cout << "Subtraction" << endl;
			break;
		case 3:
			cout << "Multiplication" << endl;
			break;
		case 0:
			cout << "Exiting the application" << endl;
			exit(0);
			break;
		default:
			cout << "Wrong choice" << endl;
		}
	}
END:
	cout << "\nProgram ended successfully" << endl;
	goto BEGIN;

	return 0;
}
int display()
{
	int ch;
	cout << "Press, " << endl;
    cout << "1.Addition"<<endl;
	cout << "2.Subtraction" << endl;
	cout << "3.Multiplication" << endl;
	cout << "0.Exit" << endl;
	cout << "Choice: ";
	cin >> ch;
	return ch;
}


