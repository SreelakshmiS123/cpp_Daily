#pragma once
#include<iostream>
using namespace std;
class DeliveryTip
{
protected:
	int orderID;
	int billAmt;
	int distance;
	int tip;
public:
	DeliveryTip(int id,int bill,int dist);
	void calculateTip();
	void printDetails();
};