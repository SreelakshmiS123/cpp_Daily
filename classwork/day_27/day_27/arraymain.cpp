#include<iostream>
#include "array.h"
using namespace std;
int main()
{
	int size,arr[MAX];
	cin >> size;
	for (int i = 0;i < size;i++)
	{
		cin >> arr[i];

	}
	arraysort a(arr, size);
	cout<<"Largest element in the array is: "<<a.arrBiggest()<<endl;
	cout << "Array after sorted in ascending order: " << endl;
	a.sortAscending();
	a.arraydisplay();
	cout << endl;
	cout << "Array after sorted in descending order: " << endl;
	a.sortDescending();
	a.arraydisplay();

}