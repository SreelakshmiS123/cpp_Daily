#include<iostream>
#define LOYALTY 5
using namespace std;
int main()
{
	int loyalty=0;
	int trust = LOYALTY;
	do
	{
		cout << "Are we still friends???" << endl;
		trust--;
		cout << "Do you still love me???";
		cin >> loyalty;
	} while ((trust > 0) && (loyalty > 0));

	cout << "We are not friends anymore";


	return 0;
}