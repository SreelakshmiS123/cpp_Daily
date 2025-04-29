#include<iostream>
int energy(int);
using namespace std;
int main()
{
	int n;
	cout << "Enter current energy: ";
	cin >> n;
	energy(n);
}
int energy(int n)
{
	if (n <=0)
		return 0;
	else
		cout << n << " ";
	energy(n / 2);

	
 }