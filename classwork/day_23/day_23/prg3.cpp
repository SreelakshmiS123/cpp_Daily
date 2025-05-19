#include<iostream>
#include<cstdlib>
using namespace std;
int* fun(int a)
{
	static int sum = 0;//use static as a fix to avoid dang ptr
	sum = sum + a;
	cout << "BA of sum: " << (unsigned long int) & sum << endl;
	return &sum;
}
int main()
{
	int* ptr = fun(101);//dangling ptr situation

	cout << *ptr << "\tAddress of sum= " << (unsigned long int)ptr << endl;
	*ptr = 202;
	ptr = fun(303);
	cout << *ptr << endl;
}