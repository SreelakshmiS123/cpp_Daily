#include<iostream>
int swap(&int, &int);
using namespace std;
int main()
{
	int a, b;
	cout << "Enter the values of a and b: " << endl;
	cin >> a >> b;
	cout<<swap(a,b);
}
int swap(int &a, int &b)
{
	if (a < 0 || b < 0)
		return 0;
	else
	{
		int a = a + b;
		int b = a - b;
		a = a - b;
		cout << a << b;
	}
}