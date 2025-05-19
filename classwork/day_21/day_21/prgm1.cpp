#include<iostream>
using namespace std;
int main()
{
	int* ptr = nullptr;
	int a = 10;
	cout << a << endl;;

	cout << ptr<<endl;

	cout << &a << endl;

	cout << &ptr<<endl;

	ptr = &a;

	cout << *ptr<<endl;
	*ptr = 20;
	cout << a << "\t"<< * ptr << endl;

	int arr[3] = { 1,2,3 };
	//int* ptr1 = nullptr;
	ptr = arr;

	cout << *ptr<<endl;
	//ptr = a;
	cout << ptr;
}