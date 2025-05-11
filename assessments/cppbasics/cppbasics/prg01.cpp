#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n > 0)
		cout << "Positive number";
	else if (n < 0)
		cout << "Negetive number";
	else
		cout << "Zero";
}