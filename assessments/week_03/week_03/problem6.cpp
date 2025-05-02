/*You are given an array arr[] of size N containing positive integers.Your task is to reverse every sub - array of size K.

If the number of elements left at the end is less than K, reverse all of them as is.

*/
#include<iostream>
#define MAX 20
using namespace std;
int main()
{
	int n, arr[MAX];
	int start, end, temp;
	cout << "Enter the no.of elements: ";
	cin >> n;

	cout << "Enter the elements of the array: ";
	for (int i = 0;i < n;i++)
		cin >> arr[i];

	int k;
	cout << "Enter the size of subarray: ";
	cin >> k;

	for (int i = 0;i < n;i = i + k)
	{
		start = i;
		end = i + k - 1;

		//if(end>k)
		if (end >= n){
			end = n - 1;
	}
	while (start < end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
	for (int i = 0;i < n;i++)
		cout << arr[i]<<" ";
}

/*
Enter the no.of elements: 6
Enter the elements of the array:
1 2 3 4 5 6
Enter the size of subarray: 3
3 2 1 6 5 4*/