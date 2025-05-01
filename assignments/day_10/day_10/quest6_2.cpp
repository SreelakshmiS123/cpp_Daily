#include<iostream>
using namespace std;
int sumOfdig(int);
int main()
{
	int n,dig;
	cout << "Enter n: " << endl;
	cin >> n;
	cout << "Sum is: " << sumOfdig(n);
}
int sumOfdig(int n)
{
	int dig;
	int sum = 0;
	while (n > 0)
	{
		dig = n % 10;
		sum = sum + dig;
		n = n / 10;
	}
		if (n < 10)
			return n;
		if (sum>=10)
	      return sumOfdig(n);
}