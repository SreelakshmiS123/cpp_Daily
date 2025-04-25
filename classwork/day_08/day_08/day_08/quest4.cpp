#include<iostream>
bool isPrime(int);
using namespace std;
int main()
{
	int ch, num;
	int fact = 1;
	cout << "Enter value of ch: " << endl;
	cin >> ch;
	cout << "Enter value of ch: " << endl;
	cin >> num;
	switch (ch)
	{
	case 1:
		for (int i = 1;i < num;i++)
			fact = fact * i;
		cout << "Factorial :" << fact;
	case 2:
		for (int i = 1;i < num;i++)
			fact = fact * i;
		cout << "Factorial :" << fact;
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