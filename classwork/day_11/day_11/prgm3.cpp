#include<iostream>
using namespace std;
int main()
{
	int arr[10],n;
	int i;
	int cap = 10;
	cout << "Enter the values of the array"<<endl;
	for ( i = 0;i < cap;i++)
		cin >> arr[i];
	cout << "Enter the number to be searched"<<endl;
	cin >> n;

	for (i = 0;i < cap;i++)
	{

		if (arr[i] == n)
			break;
	}
	if (i == cap)
		cout << "Not present";
	else
		cout << "Element present";
}