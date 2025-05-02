//You are given a sorted array A of size N containing integers. Every element in the array appears exactly twice, except for one element that appears only once. Your task is to find and print that unique element.

#include<iostream>
#define MAX 20
using namespace std;
int main()
{
	int arr[MAX],n;
	//int count;
	cout << "Enter the no.of elements in the array: ";
	cin >> n;

	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
		
	}

	for (int i = 0;i < n;i++)
	{
		if ((i > 0 && arr[i] == arr[i - 1]) || (i < n-1 && arr[i] == arr[i + 1]))
			continue;
		else
		{
			cout << "Unique element found is " << arr[i]<<endl;
			break;
		}
	}

}

/*Enter the no.of elements in the array: 9
1 1 2 2 3 4 4 5 5

Unique element found is 3
*/