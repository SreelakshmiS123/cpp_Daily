#include<iostream>
#include"primeFunction.h"
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