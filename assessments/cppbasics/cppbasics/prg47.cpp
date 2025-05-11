#include<iostream>
using namespace std;
int main()
{
	char hexa[20];
	int dec = 0;
	int base = 1;

	cin >> hexa;
	int len = strlen(hexa);
	for (int i = len - 1;i >= 0;i--)
	{
		char dig = hexa[i];
		int value;
		if (dig >= '0' && dig <= '9')
		{
			value = dig - '0';
		}
		else if (dig >= 'A' && dig <= 'F')
		{
			value = dig - 'A'+10;

		}
		else if (dig >= 'a' && dig <= 'f')
		{
			value = dig - 'a' + 10;

		}
		dec = dec + value + base;
		base = base * 16;
	}
	cout << dec;
}