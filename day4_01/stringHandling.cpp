#include<iostream>
#include<cstring>
#include"stringHand.h"
using namespace std;
void stringHandling()
{
	char ch = 'A';
	char fName[20];//array of char(size if fixed)
	string sName;//string(dynamically grows the size of the string)

	cout << "ch Value" << ch << endl;
	cout << "Enter First Name: "<<endl;
	cin >> fName;
	cout << "Enter second name: "<<endl;
	cin >> sName;
	cout << "\nMy name is " << fName << " " << sName << endl;

	char Name[] = "Hello";
	cout << sizeof(Name) << endl;
	cout << "String length of Name: " << strlen(Name) << endl;

	for (int i = 0;i < sizeof(Name);i++) {
		printf("\n%c=%d", Name[i], Name[i]);
	}
}