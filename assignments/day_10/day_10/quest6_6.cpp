//sum of 2 digits is even
#include<iostream>
int sumOfdig(int);
using namespace std;
int main()
{
	int a,b,sum=0;
	cout << "Enter the value of a and b: "<<endl;
	cin >> a>>b;
	sum = a + b;
	sumOfdig(sum);
}
int sumOfdig(int sum)
{

	if (sum % 2 == 0)
	{
		cout << "Even number";

	}
	else
	{
		cout << "Odd number";
		return 0;
	}
}