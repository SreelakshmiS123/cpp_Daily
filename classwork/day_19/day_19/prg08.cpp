#include<iostream>
using namespace std;
void swap1(int, int);//call by value;
void swap1(int, int);//call by value;
void swap1(int, int);//call by value;

int main()
{
	int a = 10,b = 20;
	swap1(a, b);
	cout << "In main(before swap)\n"<< a<< "\t" << b << endl;
}
void swap1(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;

	cout << "In swap1 function\n" << a << "\t" << b << endl;
}
void swap2(int *a, int* b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;

	cout << "In swap2 function\n" << a << "\t" << b << endl;

}
void swap3(int& a, int& b)
{
	int t;
	t = a;
	a = b;
	b = t;

	cout << "In swap3 function\n" << a << "\t" << b << endl;

}