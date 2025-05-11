//Find Remainder Without Using % Operator
#include<iostream>
using namespace std;
int main()
{
	int a, b,r;
	cin >> a >> b;
	r = a - (a / b) * b;
	cout << r;
}