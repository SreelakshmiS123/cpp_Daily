#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	char str[30];
	cin.getline(str, 29);

	for (int i = 0;i < strlen(str);i++)
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			sum = sum + str[i]-48;
		}
	}
	cout << sum;
}