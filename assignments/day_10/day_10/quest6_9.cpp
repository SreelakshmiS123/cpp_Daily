#include<iostream>
int power(int,int);
using namespace std;
int main()
{
	int a, b;
	cout << "Enter the values of a and b: " << endl;
	cin >> a >> b;
	cout << "Power of a^b: " << power(a, b) << endl;
}
int power(int a, int b)
{
	if (b == 0)
		return 1;
	else
		return a*power(a,b-1);
}