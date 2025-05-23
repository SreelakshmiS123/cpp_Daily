#pragma once
#include<string>
#define MAX 20.0
using namespace std;
class luggageWeight
{
protected:
	string pName;
	float weight;
	float limit;
public:
	luggageWeight(string n, float w);
	bool checkOverweight();
	void displayDetails();

};