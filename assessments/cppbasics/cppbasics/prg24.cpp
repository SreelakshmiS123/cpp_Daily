#include<iostream>
using namespace std;
int main()
{
	int arr[30],sum=0;
	int size;
	cin >> size;
	for (int i = 0;i < size;i++)
		cin >> arr[i];
	
	for (int i = 0;i < size;i++)
	{
		sum = sum + arr[i];
	}
	cout << "sum= " << sum;

}