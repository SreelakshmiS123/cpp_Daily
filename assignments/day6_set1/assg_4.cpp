#include<iostream>
#include"assg.h"
using namespace std;
int assg_4()
{
	int a, b;
	cout << "Enter the value of a and b ";
	cin >> a >> b;
	a = a + b;
	b = a - b;
	a = a - b;

	cout << "Swapped value of a and b is " << a << " " << b;

	return 0;
}