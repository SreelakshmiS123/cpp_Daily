#include<iostream>
using namespace std;
int main()
{
	int n,j,k,m;
	cin >> n;

	for (int i = 00;i < (n/2)+1;i++)
	{
		for (j = 0;j < (n / 2) - i;j++)
			cout << " ";
		for (k = j;k <= n / 2;k++)
			cout << "*";
		for (m = j + 1;m <= n / 2;m++)
			cout << "*";
		cout << endl;
	}
}