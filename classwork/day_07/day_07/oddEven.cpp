#include<iostream>
using namespace std;
int main()
{
	int n,dig,count=0,odd=1,even=1;
	cout << "Enter the no. " << endl;
	cin >> n;
	while (n != 0)
	{
		dig = n % 10;
		count++;

		cout << count;
		if (count % 2 == 0) {
			even = even* dig;
		}
		else {
			odd = odd * dig;
		}
		n = n / 10;
	}
	cout << "Product of even no. is: " << even;
	cout << "Product of odd no. is: " << odd;
	if (odd == even)
	{
		cout << "It is equal" << endl;
	}
	else
	{
		cout << "Not equal" << endl;
	}
	return 0;
}