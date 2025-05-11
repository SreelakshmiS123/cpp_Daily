//octal to decimal
#include<iostream>
using namespace std;
int main()
{
	int r;
	float area = 0, circum = 0;
	float pi = 3.14;
	cin >> r;

	area = pi * (r * r);
	circum = 2 * pi * r;

	cout << "Area "<<area << endl;
	cout << "Circumference " << circum;
}