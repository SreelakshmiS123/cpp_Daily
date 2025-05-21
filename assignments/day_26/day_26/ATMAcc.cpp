#include<iostream>
#include "atm.h"
using namespace std;
void ATMAcc::setName(char* s)
{
	strcpy_s(holder, s);
}
char* ATMAcc::getName()
{
	return holder;
}
void ATMAcc::currentBal()
{
	balance = 1;
}
void ATMAcc::setDeposit(int amt)
{
	balance = balance + amt;
}
int ATMAcc::getDeposit()
{

	return balance;
}
void ATMAcc::setWithdraw(int amt)
{
	balance = balance - amt;
}
int ATMAcc::getWithdraw()
{

	return balance;
}

void ATMAcc::displayBalance()
{
	cout << "Account holder name: " << getName() << endl;
	cout << "Current balance after deposit: " << getDeposit()<<endl;
	cout << "Current balance after withdrawal:  " << getWithdraw();
}
