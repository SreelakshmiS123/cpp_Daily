#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a >= b && a >= c)
	{
		cout << "a is biggest";
	}
	else if (b >= a && b >= c)
	{
		cout << "b is biggest";
	}
	else
	{
		cout << "c is biggest";
	}
}