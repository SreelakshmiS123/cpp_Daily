#include<iostream>
#include"primeFunction.h"
int digit(int);
bool isPrime(int);
using namespace std;
/*int count(int num)
{
	int dig;
	int flag = 0;
	int count = 0;
	while(num>0){
	for (int i = 2;i < num;i++)
	{
		dig = num % 10;
		if (dig % i == 0) {
			flag = 1;
		}
		num = num / 10;
		count++;
	}
	if (flag == 0)
	{
		cout << count;
	}
	else
		return 0;
}
}
*/
int digit(int num)
{
	int dig;
	while (num > 0) {
		dig = num % 10;
		cout << "Digit: " << dig<<endl;
		if (isPrime(dig) == true)
			cout << dig << "is prime digit" << endl;
		num = num / 10;
	}
	return 0;
}
int main()
{
	int num;
	cout << "Enter number: ";
	cin >> num;
    digit(num);
	isPrime(num);
}