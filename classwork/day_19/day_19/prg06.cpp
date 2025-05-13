#include<iostream>
using namespace std;
int main()
{
	int a;
	a = 10;
	/*
	int *ptr=&a;
	//store a value in an address and make the address
	//pointed by the pointer
	*ptr=101
	cout<<*ptr<<endl;
	*/
	int* ptr = (int*)malloc(sizeof(int) * 3);
	cout << "Address of ptr= " << (unsigned long int)ptr << endl;
	*ptr = 202;
	ptr++;
	cout<< "Address of ptr= " << (unsigned long int)ptr << endl;
	cout << *ptr;
	*ptr = 203;
	ptr++;
	cout << "Address of ptr= " << (unsigned long int)ptr << endl;
	//cout << *ptr;

	*ptr = 301;

	ptr = temp;

	cout << *ptr++ << endl;
	cout << *ptr++ << endl;

	cout << *ptr++ << endl;


	
}