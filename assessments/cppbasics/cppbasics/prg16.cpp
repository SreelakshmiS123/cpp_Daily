#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	bool isprime = true;
	for (int i = 2;i<= n ;i++)
	{
		if (n % i == 0)
		{
			isprime = false;
		}
		else
		{
			isprime = true;
		}
	}
	if (isprime)
		cout << "Is a prime number";
	else
		cout << "Not a prime number";
}