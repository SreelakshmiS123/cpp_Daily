#include<iostream>
using namespace std;
int main()
{
	int n,dig,rev=0;
	cin >> n;
	int temp = n;
	while(temp)
	{
		dig = temp % 10;
		rev = (rev * 10) + dig;
		temp = temp / 10;
	}
	if (rev == n)
		cout << "Is palindrome";
	else
		cout << "Not a palindrome";
}