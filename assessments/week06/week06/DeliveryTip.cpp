#include<iostream>
#include<string>
#include"delivery.h"
using namespace std;
DeliveryTip::DeliveryTip(string id, int bill, int dist)
{
	orderID = id;
	billAmt = bill;
	distance = dist;
}
void DeliveryTip::calculateTip()
{
	int tip = 0;
	if (distance <= 5)
	{
		tip = tip + 5;
	}
	else if (distance > 5 && distance <= 10)
	{
		tip = tip + 10;
	}
	else if (distance > 10)
	{
		tip = tip + 15;
	}
}
void DeliveryTip::printDetails()
{
	cout << "Order " << orderID << " | " << "Tip: " << tip;
}
