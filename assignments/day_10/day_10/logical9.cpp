#include<iostream>
using namespace std;
int main()
{
	int n,dig,pro=1;
	cout << "Input n: ";
	cin >> n;

	for (int i = 1;i <= n;i++)
	{
		dig = n % 10;
		pro *= dig;
		n = n / 10;
	}
	for (int i = 1;i <= n;i++)
	{
		if (pro % i == 0)
			cout << "Open the box";
		else
			cout << "Do not open the box";
	}
}