#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	int* ptr = nullptr;
	ptr = &a;
	cout << *ptr << endl;

	*ptr = 101;//update the value using ptr

	cout << *ptr << endl;
	cout << a << endl;

	ptr = &b;
	cout << *ptr << endl;

	ptr = &c;
	cout << *ptr << endl;
}