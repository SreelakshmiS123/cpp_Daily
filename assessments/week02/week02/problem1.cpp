//Pattern printing
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	
	cout << "*"<<endl;
	for (int i = 1;i <= n;i++) {
		cout << "*";
		for (int j = 1;j <=i;j++)
		{
			cout << j ;
		}
		for (int j = i-1;j >= 1;j--)
			cout << j;
		if (i != 0)
			cout << "*";
		cout << endl;
	}
	for (int i = n - 1;i >= 1;i--)
	{
		cout << "*";
		for (int j = 1;j <= i;j++)
			cout << j;
		for (int j = i - 1;j >= 1;j--)
			cout << j;
		if (i != 0)
			cout << "*";
		cout << endl;
	}
	cout << "*";
	return 0;
}