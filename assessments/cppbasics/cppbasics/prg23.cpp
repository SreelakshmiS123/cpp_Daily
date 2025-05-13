#include<iostream>
using namespace std;
int main()
{
	int arr[20], size, t;
	cin >> size;
	for (int i = 0;i < size;i++)
	{
		cin >> arr[i];
	}
	int start = 0;
	//int end = size - 1;
	
	for (int i = 0;i < size;i++)
		for (int j = i+1;j <size;j++)
		{
			{
				if (arr[i] < arr[j])
				{
					t = arr[j];
					arr[j] = arr[i];
					arr[i] = t;

				}
			}
		}
	for (int i = 0;i < size;i++)

		cout << arr[i]<<endl;
	cout << "Second smallest element : " << arr[size-2];
}