#include<iostream>
#include<string>
#include"luggage.h"
using namespace std;
luggageWeight::luggageWeight(string n,float w)
{
	pName = n;
	weight = w;
	limit = MAX;
}
bool luggageWeight::checkOverweight()
{
	return weight > limit;
}
void luggageWeight::displayDetails()
{
	cout << "Passenger: " << pName << endl;
	cout << "Luggage Weight " << weight << endl;
	cout << "Limit is : " << limit << endl;

	if (checkOverweight())
	{
		cout << "Overweight!";
	}
	else
		cout << "Luggage within limit.";
}
