//second last digit of number
#include<iostream>
int secondLast(int);
using namespace std;
int main()
{
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	secondLast(n);
}
int secondLast(int n)
{
	int dig;
	if (n < 10)
		//cout << "No second last digit";
	    return 0;
	else
	{
		dig = (n / 10) % 10;
		cout << "Second last digit is: " << dig;
	}
}