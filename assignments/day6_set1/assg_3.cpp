#include<iostream>
#include"assg.h"
using namespace std;
int assg_3()
{
	int r;
	double pi = 3.14;
	float area;
	cout << "Enter the radius of circle ";
	cin >> r;
	area = pi *(r * r);
	cout << "Area of the circle is " << area;

    return 0;
}