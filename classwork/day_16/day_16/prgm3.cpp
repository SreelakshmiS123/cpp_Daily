//remove duplicate elements form an array
#include<iostream>
//#define MAX 5
using namespace std;
int main()
{
	int n, a[30];
	cout << "Enter the no.of elements: ";
	cin >> n;
	for (int i = 0;i < n;i++)
		cin >> a[i];
	for (int i = 0;i < n;i++)
	{
		for (int j = i+1;j < n;)
		{
			{
				if (a[i] == a[j])
				{
					//shifting elements to the left side
					for (int k = j;k < n - 1;k++)
					{
						a[k] = a[k + 1];
					}
					n--;//reduce the size 
				}
				else
					j++;//no dup element found in the next element
			}
		}
	}
	cout << "Resultant array: ";
	for (int i = 0;i < n;i++)
		cout << a[i]<<" ";
}