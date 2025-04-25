#include<iostream>
#include"assg.h"
using namespace std;
int assg_1()
{
	
	float bs;
	cout << "Enter basic salary";
	cin >> bs;
	float rent_a = 0.4 * bs;
	float dear_a = 0.2 * bs;
	float gross = rent_a + dear_a+bs;
	cout << gross;
	return 0;
}