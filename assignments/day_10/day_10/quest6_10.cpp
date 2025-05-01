#include<iostream>
int triangle(int, int, int);
using namespace std;
int main()
{
	int a1, a2, a3;
	cout << "Enter the 3 angles: " << endl;
	cin >> a1 >> a2 >> a3;
	triangle(a1, a2, a3);
}
int triangle(int a1, int a2, int a3)
{
	int sum = 0;
	sum = a1 + a2 + a3;

	if (sum == 180)
	{
		cout << "Can form triangle";
	}
	else
		cout << "Cannot form triangle";
	return 0;
}