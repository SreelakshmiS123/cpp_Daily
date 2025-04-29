#include<iostream>
int sumOfn(int);
using namespace std;
int main()
{
	int n,sum;
	cout << "Enter the value of n: ";
	cin >> n;
	cout<<sumOfn(n);
}
int sumOfn(int n)
{
	if (n == 0)
		return 0;
	else
		return (n + sumOfn(n - 1));
}