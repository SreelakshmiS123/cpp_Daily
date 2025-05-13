#include<iostream>
using namespace std;
int main()
{
	int a[3] = { 10,20,30 };

	int* ptr = a;
	cout << *ptr++<<endl;
	cout << *++ptr << endl;//increment the content
	cout << *ptr++ << endl;

	ptr = a;//reassign to th BA
	
	int prod = *ptr * *ptr;

	cout << "Product: " << prod << endl;

	cout << sizeof(ptr) << " " << sizeof(void*) << endl;
}