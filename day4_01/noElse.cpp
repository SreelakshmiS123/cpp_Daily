#include<iostream>
#include"noElse.h"
#define MAXCAP 100
using namespace std;
int noElsehandling()
{
	int capCurrent, unusedCap = 0;
	cout << "Enter the current capacity";
	cin >> capCurrent;
	unusedCap = MAXCAP - capCurrent;
	if (unusedCap == 0) {
		cout << "Storage is full" << endl;
		return 0;
		
	}
	cout << "You can store more items" << endl;

	return 0;
}