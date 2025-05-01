#include<iostream>
using namespace std;
int main()
{
	int n,dig;
	int odd = 1;
	int even = 1;
	int pos = 1;
	cout << "Enter the value of n: ";
	cin >> n;

	while (n > 0)
	{
		dig = n % 10;
		if (pos % 2 == 0)
			even = even * dig;
		else
			odd = odd * dig;
	}
	n = n / 10;
	pos++;

	if (odd == even)
		cout << "Product of even place and odd place is equal";
	else
		cout << "Product of even place and odd place is not equal";

}