//You are given an array A of positive integers. Your task is to find and print all the leaders in the array.


#include<iostream>
#define MAX 20
using namespace std;
int main()
{
	int n,arr[MAX],lead[MAX],ind=0;
	int right;
	cout << "Enter the size of the array: ";
	cin >> n;

	for (int i = 0;i < n;i++)
		cin >> arr[i];
	
	right =arr[n - 1];
	lead[ind++] = right;

	cout << arr[n - 1] << " ";
	for (int i = n - 2;i >= 0;i--)
	{
		if (arr[i] > right)
		{
			right = arr[i];
			lead[ind++] = arr[i];
		}
	}

	for (int i = 0;i < n;i++)
		cout << lead[i];
}