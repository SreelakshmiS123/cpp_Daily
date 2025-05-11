//Find the Smallest Digit in a Number
#include<iostream>
using namespace std;
int main()
{
	int n,dig,small=9;
	cin >> n;
	while (n)
	{
		dig = n % 10;
		if (dig < small)
			small = dig;
		n = n / 10;
	}
	cout << small;
}