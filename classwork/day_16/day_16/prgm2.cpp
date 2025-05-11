//2nd smallest element of an array
#include<iostream>
#define MAX 5
using namespace std;
int main()
{
	int a[MAX],small=0,t;
	for (int i = 0;i < MAX;i++)
		cin >> a[i];
	//small =a[ MAX - 1];
	for (int i = 0;i < MAX;i++)
	{
		for (int j = 0;j < MAX;j++)
		{
			if (a[j] < a[j + 1])
			{
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;
			}
		}
	}
	cout << "Second smallest element is: ";
	cout << a[MAX - 2];
}