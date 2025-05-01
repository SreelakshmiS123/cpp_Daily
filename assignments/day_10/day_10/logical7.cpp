#include<iostream>
using namespace std;
int main()
{
	int n,dig,nonzero=0;
	cout << "Enter n: ";
	cin >> n;

	for (int i = 0;i < n;i++)
	{
		dig = n % 10;
		if (dig != 0) {
			nonzero = dig;
			//cout <<"Non-zero number is "
		}
		n = n / 10;

	}
	if (nonzero % 2 == 0)
		cout << "Even number";
	else
		cout << "Not even";
}