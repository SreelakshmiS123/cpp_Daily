#include<iostream>
#include "grade.h"
using namespace std;
void Grade::getMark()
{
	cout << "Enter mark 1: ";
	cin >> m1;
	cout << "Enter mark 2: ";
	cin >> m2;
	cout << "Enter mark 3: ";
	cin >> m3;
}
void Grade::calcAvg()
{
	avg = (m1 + m2 + m3) / 3.0;
	cout << "Average of marks is: "<<avg<<endl;

}
void Grade::display()
{
	cout << "Your Grade: "<<"\t";
	if (avg >= 90 && avg <= 100)
	{
		cout << "A";
	}
	else if (avg >= 70 && avg <= 89)
	{
		cout << "B";
	}
	else if (avg >= 60 && avg <= 79)
	{
		cout << "C";
	}
	else if (avg >= 40 && avg <= 59)
	{
		cout << "D";
	}
	else if (avg >= 0 && avg <= 39)
	{
		cout << "Failed";
	}
	else
	{
		cout << "Invalid";
	}
}