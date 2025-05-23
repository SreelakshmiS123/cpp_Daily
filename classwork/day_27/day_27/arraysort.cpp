#include<iostream>
#include "array.h"
using namespace std;
arraysort::arraysort(int a[], int s)
{
	size = s;
	for (int i = 0;i < size;i++)
	{
		arr[i] = a[i];
}
}

int arraysort::arrBiggest()
{
	int large = INT_MIN;
	for (int i = 0;i < size;i++)
	{
		if (arr[i]>large)
		{
			large = arr[i];
		}

	}
	return large;
}
void arraysort::sortAscending()
{

	for (int i = 0;i < size;i++)
	{
		for (int j = i + 1;j < size;j++)
		{
			{
				if (arr[i] > arr[j])
				{
					int t = arr[i];
					arr[i] = arr[j];
					arr[j] = t;
				}
			}
		}
	}
}
void arraysort::sortDescending()
	{
	for (int i =0;i < size;i++)
	{
		for (int j = i + 1;j < size;j++)
		{
			{
				if (arr[i] < arr[j])
				{
					int t = arr[i];
					arr[i] = arr[j];
					arr[j] = t;
				}
			}
		}
	}
	
}
void arraysort::arraydisplay()
{
	for (int i = 0;i < size;i++)
	{
		cout << arr[i]<<"\t";
	}
}
