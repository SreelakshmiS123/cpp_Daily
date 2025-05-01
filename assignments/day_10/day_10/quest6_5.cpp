//hour to seconds
#include<iostream>
int hourToseconds(int);
using namespace std;
int main()
{
	int n;
	cout << "Enter hour: ";
	cin >> n;
	hourToseconds(n);
}
int hourToseconds(int n)
{
	int seconds = 1;
	int min = 1;
	if (n < 1)
		return 0;
	else
	{
		min = (n * 60);
		seconds = (n * 60 * 60);
		cout << "Minutes: " << min << endl;
		cout << "Seconds: " << seconds;
	}
}