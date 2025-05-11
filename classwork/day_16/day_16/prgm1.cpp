//smallest and largest element in an array
#include<iostream>
#define MAX 5
using namespace std;
int main()
{
	int a[MAX],small = 0, large = 0;
	for (int i = 0;i < MAX;i++)
		cin >> a[i];
	small = a[MAX - 1];
	for (int i = 0;i < MAX;i++)
	{
		if (a[i] <= small)
		{
			small = a[i];
		}
		else if (a[i] > large)
		{
			large = a[i];
		}
	}
	cout << "Largest and smallest are: ";
	cout << small<<endl<<large;

}