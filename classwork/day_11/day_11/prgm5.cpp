//prime no.s
#include<iostream>
#define MAX 100
bool isPrime(int);
using namespace std;
int main()
{
	int num,count=0;
	cout << "Enter n: ";
	cin >> num;
	int arr[MAX];
	count = 0;
	for (int i = 1;i <= num;i++)
	{
		if (isPrime(i))
		{
			cout << i << endl;
			arr[count] = i;
			count++;
		}
	}

	for (int i = 0;i < count;i++)
	{
		cout << i << endl;

	}
}
bool isPrime(int num)
{
	bool flag = false;

	if (num <= 1)
	{
		return false;
	}
}