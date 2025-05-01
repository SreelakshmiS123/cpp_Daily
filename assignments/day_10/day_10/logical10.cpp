#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout << "Enter the value of n: ";
	cin >> n;

	int num = 1;

	for (int i = 1;i <= n;i++)
	{
		num = num * 2;
		sum += num;
	}
	cout << "Sum of number after press: " << sum;
}