#include<iostream>
#include"assg.h"
using namespace std;
int assg_6()
{
	int dig, n;
	int sum = 0;
	cout << "Enter a 5 digit no. " << endl;
	cin >> n;
	for (int i = 0;i <= 5;i++)
	{
		dig = n % 10;
		sum = sum + dig;
		n = n / 10;
	}
	cout << sum;
	return 0;
}