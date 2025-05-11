#include<iostream>
using namespace std;
int main()
{
	int a, b, lcd;
	cin >> a >> b;
	for (int i = 2;i <= a;i++)
	{
		if ((a % i == 0) && (b % i == 0))
		{
			lcd = i;
			break;
		}
	}
	cout << lcd;
}