//Count Number of Even and Odd Digits in a Number
#include<iostream>
using namespace std;
int main()
{
	int n, dig, evencount = 0, oddcount = 0;
	cin >> n;
	while (n)
	{
		dig = n % 10;
		if (dig % 2 == 0)
			evencount++;
		else if (dig % 2 == 1)
			oddcount++;
		n = n / 10;
	}
	cout << "Even count: " << evencount << endl;
	cout << "Odd count: " << oddcount;
}