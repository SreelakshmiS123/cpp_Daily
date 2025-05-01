#include<iostream>
using namespace std;
int main()
{
	long int bin;
    int dig,count=0;
	cout << "Enter the binary value: ";
	cin >> bin;

	while (bin > 0)
	{
		dig = bin % 10;
		if (dig == 1)
			count++;
		bin = bin / 10;

	}
	cout << "No.of steps to unlock is " << count;
}