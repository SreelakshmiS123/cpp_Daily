#include<iostream>
using namespace std;
int main()
{
	int n, dig,sum=0;
	cout << "Enter the coin colletion: ";
	cin >> n;
	while (n > 0) {
		dig = n % 10;
		if (dig % 2 != 0)
			sum = sum + dig;
			n = n / 10;
	}
	cout << sum;
}