#include<iostream>
//#include"primeFunction.h"
bool isPrime(int);
using namespace std;
int main()
{
	int n;
	cout << "Enter value of n: ";
	cin >> n;
	int count = 0;
	for (int i = 1;i < n;i++)
	{
		for (int j = i;j <= n;j++)
		{
			if (isPrime(i) && isPrime(j))
			{
				if ((i + j) == n)
				{
					cout << "sum of numbers are " << (i + j);
					count++;
				}
		 }
		}
	}


}
bool isPrime(int num)
{
	bool flag = false;
	if (num <= 1)
		return false;
	for (int i = 2;i <= num / 2;i++)
	{
		if (num % i == 0)
		{
			flag = true;
			break;
		}
	}
	if (flag == false)
		return true;
	else
		return false;
}