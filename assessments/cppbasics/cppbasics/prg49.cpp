//octal to decimal
#include<iostream>
using namespace std;
int main()
{

	int dec, dig;
	int oct[10];
	cin >> dec;
	int temp = dec;
	int i = 1;
	while (temp != 0)
	{
		oct[i] = temp % 8;
		temp = temp / 8;
		i++;
	}

	for (int j = i - 1; j > 0; j--)
		cout << oct[j];
}