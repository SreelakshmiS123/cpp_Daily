#include<iostream>
using namespace std;
int main()
{
	int charge,mobileStatus;
	cout << "Mobile status(1/0): ";
	cin >> mobileStatus;
	if (mobileStatus == 1)
	{
		cout << "Enter the current charge" << endl;
		cin >> charge;
		if (charge <= 18)
		{
			cout << "Plug-in to charge" << endl;
		}
		cout << "Open Instagram" << endl;
		cout << "Check stories";
	}
	else
	{
		cout << "Powering on the mobile" << endl;
		cout << "Mobile status(1/0): ";
		cin >> mobileStatus;
		if (mobileStatus == 1)
		{
			cout << "Enter the current charge" << endl;
			cin >> charge;
			if (charge <= 18)
			{
				cout << "Plug-in to charge" << endl;
			}
			cout << "Open Instagram" << endl;
			cout << "Check stories";
		}
		else
		{
			cout << "Mobile is not in a good condition or battery is dead" << endl;
			cout << "Please check the mobile at the store";
		}
	}
}