#include<iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	cout << "Enter n: ";
	cin >> n;

	for (int i = 1;i <=sqrt( n);i++)
		if (n % i == 0)
			sum = sum + i;
	if (sum == n)
		cout << "Perfect army";
	else
		cout << "Not a perfect army";
}