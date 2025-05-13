#include<iostream>
using namespace std;
void* allocMem(int*, int);
int getValues(int*, int);
void sortAsc(int*,int);
void disp(int*, int);
int main()
{
	int* ptr=nullptr;
	int n=5;
	ptr = allocMem(ptr, n);
	getValues(ptr, n);
	cout << "Before sort" << endl;
	disp(ptr, n);
	sortAsc(ptr, n);
	cout << "After sort" << endl;
	disp(ptr, n);

}
void* allocMem(int* p, int n)
{
	 p = (int*)malloc(sizeof(int) * n);
	 return p;
}
int getValues(int* p, int n)
{
	for (int i = 0;i < n;i++,p++)
	{
		cin >> *p;
	}
	return 0;
}
int swap(int& x, int& y)
{
	int t;
	t = x;
	x = y;
	y = t;
}
void sort(int *p,int n)
{
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (p[i] > p[j])
				swap(p[i], p[j]);
		}
	}
}

void disp(int* p, int n)
{
	int i = 0;
	while (i < n)
	{
		cout << *p++ << "\t";
		i++;
	}
	cout << endl;
}