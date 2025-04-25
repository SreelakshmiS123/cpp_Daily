#include<iostream>
int fact(int);
using namespace std;
int main()
{
	//int fact = 1;
	int n=5;
	//cout << "Enter the value of n: ";
	//cin >> n;

	int fact = fact(n);
	cout << "Factorial of n is: " << ret << endl;
	return 0;
}
int fact(int n)
{
	int ret = 1;
	cout << n << endl;
	if (n == 0||n==1)
		return 1;
	ret = n * fact(--n);
	return fact;
	fact(n);

	
}