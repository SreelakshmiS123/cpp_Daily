#include<iostream>
int dec2Base(int, int);
int base2Dec(int, int);
int base2Base(int, int);
using namespace std;
int main()
{
	
	//cout<<dec2Base(15, 2);
	cout << base2Dec(67, 8);
}
/*
arg 1: decimal value
arg 2: base for conversion
*/
int dec2Base(int num, int base)
{
	int r;
	int place = 0;
	int sum = 0;
	while (num)
	{
		r = num % base;
		sum += r * pow(10, place);
		num = num / base;
		place++;
	}
	return sum;
}

int base2Dec(int num, int base)
{
	int r;
	int place = 0;
	int sum = 0;

	while (num)
	{
		r = num % 10;
		sum += r * pow(base, place);
		place++;
		num = num / 10;
	}
	return sum;
}