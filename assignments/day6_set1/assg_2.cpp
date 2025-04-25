#include<iostream>
#include"assg.h"
using namespace std;
int assg_2() 
{
	int cost_p, selling_p, profit;
	cout << "Enter the profit and selling price " << endl;
	cin >> profit >> selling_p;
	cost_p = selling_p - profit;
	cout <<"Cost price is "<< cost_p;

	return 0;
}