#include<iostream>
using namespace std;
int equilibrium(int arr[], int n)
{
	int totalsum = 0;
	int leftsum = 0;
	for (int i = 0;i < n;i++) {
		totalsum += arr[i];
	}
	for (int i = 0;i < n;i++)
	{
		totalsum -= arr[i];
		if (leftsum == totalsum)
		{
			return i;
		}
		leftsum += arr[i];
	}
	return -1;
}
int main()
{
	int n, int arr[100];
	cout << "Enter the elements: ";
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	int index = equilibrium(arr, n);
	cout << index << endl;
	return 0;

}