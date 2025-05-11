#include<iostream>
using namespace std;
int main()
{
	int a, b, c,d,e;
	cout << "Enter the values: " << endl;
	cin >> a >> b >> c >>d>>e;
	/*
	if (a >= b && a >= c && a >= d && a >= e )
	{
		cout << "a is biggest" << endl;
	}
	else if (b >= a && b >= c && a >= d && a >= e)
	{
		cout << "b is biggest" << endl;

	}
	else if (c >= a && c >= b && c >= d && c >= e)
	{
		cout << "c is biggest" << endl;

	}
	else if (d >= a && d >= b && d >= c && d >= e)
	{
		cout << "d is biggest" << endl;

	}
	else
	{
		cout << "e is biggest" << endl;

	}
	

	if (a > b)
	{
		if (a > c)
		{
			if (a > d)
			{
				if (a >= e)
				{
					cout << "a is biggest " << endl;
				}
				else
				{
					cout << "e is biggest";
				}
			}
			else
				if()
			
		}
		
	}
/*
	if (b > c)
	{
		if (b > d)
		{
			if (b > e)
			{
				cout << "b is biggest";
			}
		}
	}
	if (c > d)
	{
		if (c > e)
		{
			cout << "c is biggest";
		}
	}
	if (d > e)
	{
		cout << "d is biggest";
	}
	else {
		cout << "e is biggest";
	}*/

	int h = a;
	if (b >= h)
		h = b;
	if (c >= h)
		h = c;
	if (d >= h)
		h = d;
	if (e >= h)
		h = e;
	cout << "biggest is "<<h;

	return 0;
}
