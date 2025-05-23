#pragma once
class ATMAcc
{
protected:
	int balance;
	char holder[30];
public:
	void currentBal();
	void setDeposit(int);
	int getDeposit();
	void setWithdraw(int);
	int getWithdraw();
	void displayBalance();

};