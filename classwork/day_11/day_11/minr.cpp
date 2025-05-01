#include<iostream>
using namespace std;
int main()
{
	//int arr[10];
	int i;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[];
	for (i = 0;i < 10;i++)
	{
		cout << arr[i];
	}
	for (i = 0;i < 10;i++)
	{
		if (arr[i] % 2 != 0)
		{
			for (i = 0;i < 5;i++)
				cin >> b[i];

		}
		else
		{
			for (i = 5;i < 10;i++)
				cin >> b[i];
		}
	}
	for (i = 0;i < 10;i++)
		cout << b[i];
}