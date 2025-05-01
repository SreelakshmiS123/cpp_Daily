#include<iostream>
using namespace std;
int main()
{
	int n,dig;
	int small = 0;
	cout << "Enter the value of n: ";
	cin >> n;
	if (n < 10)
		cout << n << endl;
	else {
		while (n > 0) {
			dig = n % 10;
			if (dig < small)
				small = dig;
			n = n / 10;
		}
		cout << small;
	}
}