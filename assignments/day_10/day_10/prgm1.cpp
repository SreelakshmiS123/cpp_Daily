#include<iostream>
int printing(int);
using namespace std;
int main()
{
	int n;
	cout << "Enter the value of N: ";
	cin >> n;
	printing(n);
}

int printing(int n)
{
	if (n < 1)
	{
		return 1;
	}
	else
		cout << n<<" ";
		printing(n - 1);
	
}