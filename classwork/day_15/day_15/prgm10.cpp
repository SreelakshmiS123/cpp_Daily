#include<iostream>
bool armstrong(int, int);
int nod(int);
using namespace std;
int main()
{
	int n,p,dig,sum=0;
	cin >> n;

	int temp = n;
	while (temp!=0)
	{
		dig = temp % 10;
		sum = sum+(dig*dig*dig);
		temp = temp / 10;
	}
	if (n == sum)
		cout << "Is a armstrong";
	else
		cout << "Not a armstrong";
}
int nod(int n)
{
	int count;
	while (n)
	{
	int dig = n % 10;
	 count++;
	 n = n / 10;
	}
	return count;
}
bool armstrong(int n, int p)
{
	double sum = 0;
	int temp = n;
	while (n)
	{
		int dig = n % 10;
		sum = sum + pow(r, p);
		n = n / 10;
	}
	if (temp == sum)
		return true;
	else
		return false;
}