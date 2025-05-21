#include<iostream>
#include "atm.h"
using namespace std;
int main()
{
	ATMAcc a;
	char holder[] = "LEKSHMI";
	int amt = 2000;
	a.setName(holder);
	//cout<<"Account holder name: "<<a.getName();
	a.displayBalance();
	//a.setDeposit(2000);
	//a.getDeposit();
}