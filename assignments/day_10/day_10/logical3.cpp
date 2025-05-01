#include<iostream>
using namespace std;
int main()
{
	int hr;
	cout << "Enter the hour: ";
	cin >> hr;

	for (int i = 1;i <= 60;i++)
	{
		if (i % hr == 0)
			cout << "Clock rings at " << i << "minute" << endl;;
	}
}