#include<iostream>
int factorial(int n)
{
	if (n == 0||n==1)
		return 1;

	return n * factorial(n - 1);
}
using namespace std;
int main()
{
	int n;
	cin >> n;
	cout << "Factorial of number is: " << factorial(n);
}