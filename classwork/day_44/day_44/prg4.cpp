#include<iostream>
#include<thread>
using namespace std;

typedef unsigned long long ull;
int amt = 0;
void addMoney(int x)
{
	ull start = 0, end = 190000000;
	cout << "Amt add= " << amt << endl;
	amt += x;
}