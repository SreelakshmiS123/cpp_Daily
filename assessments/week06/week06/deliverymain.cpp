#include<iostream>
#include<string>
#include "delivery.h"
using namespace std;
int main()
{
	string id;
	int amouunt, dist;
	DeliveryTip d1("ORD1", 500, 3);
	d1.calculateTip();
	d1.printDetails();
}