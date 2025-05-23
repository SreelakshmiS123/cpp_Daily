#pragma once
//get biggest of array elements
//get array sorted in ascending order
//get array sorted in descending order
#define MAX 100
class arraysort
{
protected:
	int arr[MAX];
	int size;
public:
	arraysort(int a[], int s);
	int arrBiggest();
	void sortAscending();
	void sortDescending();
	void arraydisplay();
};