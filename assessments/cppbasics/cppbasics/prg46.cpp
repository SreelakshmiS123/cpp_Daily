#include<iostream>
using namespace std;
int main()
{
	int oct, dec = 0, place = 0;
	cin >> oct;
	int temp = oct;

	while (temp)
	{
		int dig = temp % 10;
		dec = dec + dig * pow(8, place);
		temp = temp / 10;
		place++;
	}
	cout << dec;
}