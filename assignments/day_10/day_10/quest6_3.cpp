//leap year or not
#include<iostream>
int leapYear(int);
using namespace std;
int main()
{
	int n;
	cout << "Enter the year";
	cin >> n;
	leapYear(n);
}
int leapYear(int n)
{
	if (n < 0)
		return 0;
	if ((n % 4 == 0) && (n % 100 != 0 )|| n % 400==0)
		cout << "Is a leap year";
	else
		cout << "Not a leap year";
}