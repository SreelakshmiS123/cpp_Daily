#include<iostream>
#include "atm.h"
using namespace std;
void ATMAcc::currentBal()
{
	balance = 0;
}
void setDeposit(int d)
{
	balance = balance + d;
}
int getDepost()
{
	return balance;
}
