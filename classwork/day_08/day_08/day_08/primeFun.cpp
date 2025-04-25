#include<iostream>
#include"primeFunction.h"
bool isPrime(int);
using namespace std;
int main()

{
	int num;
	cout << "Enter the number: ";
	cin >> num;
	bool ret = isPrime(num);
	if (ret == true)
		cout << "Given number is a prime number" << endl;
	else
		cout << "Not a prime prime number" << endl;
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