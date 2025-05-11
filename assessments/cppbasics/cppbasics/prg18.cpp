#include<iostream>
using namespace std;
int main()
{
	int n,dig,count=0,arm=0;
	cin >> n;
	int temp = n;
	int n2 = n;
	while (temp)
	{
		dig = temp % 10;
		count++;
		temp = temp / 10;
	}
	while (n)
	{
		int r = n % 10;
		arm = arm + pow(r, count);
		n = n / 10;
	}
	if (arm == n2)
		cout << "Is a armstrong number";
	else
		cout << "Not a armstrong number";
}