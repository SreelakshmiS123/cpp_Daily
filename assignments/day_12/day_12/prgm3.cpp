#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the no.of elements: ";
	cin >> n;
	int arr[100];
	cout << "Enter the elemnts of the array: ";
	for (int i = 0;i < n;i++)
		cin >> arr[i];

cout<<"Leader in the array";
for (int i = 0;i < n;i++)
{
	bool isLeader = true;
	for (int j = i + 1;j < n;j++)
	{
		if (arr[i] < arr[j])
		{
			isLeader = false;
			break;
		}
	}
	if (isLeader)
	{
		cout << arr[i] << " ";
	}
}
cout << endl;
return 0;
}