#include<iostream>
#include"delivery.h"
using namespace std;
DeliveryTip::DeliveryTip(int id, int bill, int dist)
{
	orderID = id;
	billAmt = bill;
	distance = dist;
}
void DeliveryTip::calculateTip()
{
	int t = 0;
	if (distance < 5)
	{
		t = t + 5;
	}
	else if(distance>5&&)
}
