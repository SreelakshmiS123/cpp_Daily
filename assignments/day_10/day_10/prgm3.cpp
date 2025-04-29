#include<iostream>
int fib(int);
using namespace std;
int main()
{
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	cout << fib(n);
}
int fib(int n)
{
	if ((n == 0) || (n == 1))
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}