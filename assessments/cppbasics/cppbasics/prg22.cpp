#include<iostream>
using namespace std;
int main()
{
	int arr[20],size,small,large=0;
	cin >> size;
	for (int i = 0;i < size;i++)
	{
		cin >> arr[i];
	}
	 small = arr[size - 1];
	for (int i = 0;i < size;i++)
	{
		if (arr[i] < small)
			small = arr[i];
		else if (arr[i] > large)
		{
			large = arr[i];
		}
	}
	cout << "Smallest element: "<<small;
	cout << "Largest element: " << large;


}