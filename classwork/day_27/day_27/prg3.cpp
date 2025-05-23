#include<iostream>
using namespace std;
class BankAccount {
private:
	int accNo;
	static int accountCount;//static  member variable
public:
	BankAccount()
	{
		accountCount++;
		accNo = accountCount;
	}
};
int main()
{

}