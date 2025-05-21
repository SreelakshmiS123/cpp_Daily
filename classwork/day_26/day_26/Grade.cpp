#include<iostream>
#include "grade.h"
using namespace std;
void Grade:: setm1(int m)
{
	m1 = m;
}
void Grade::setm2(int m)
{
	m2 = m;
}
void Grade::setm3(int m)
{
	m3 = m;
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