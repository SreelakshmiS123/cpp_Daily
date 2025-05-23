#pragma once
#include<iostream>
#include<string>
using namespace std;
class DeliveryTip
{
protected:
	string orderID;
	int billAmt;
	int distance;
	int tip;
public:
	DeliveryTip(string id,int bill,int dist);
	void calculateTip();
	void printDetails();
};