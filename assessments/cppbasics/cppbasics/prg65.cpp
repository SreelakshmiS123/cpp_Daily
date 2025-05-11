//Find Sum of Digits of a Number
#include<iostream>
using namespace std;
int main()
{
	int n,dig,sum=0;
	cin >> n;
	while (n)
	{
		dig = n % 10;
		sum = sum + dig;
		n = n / 10;
	}
	cout << sum;
}