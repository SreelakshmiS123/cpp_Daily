#include<iostream>
void summonDragon(int);
using namespace std;
int main()
{
	int n;
	cout << "Enter the value of n: " << endl;
	cin >> n;
	summonDragon(n);
}
void summonDragon(int n)
{
	for (int i = 0;i <= n;i++)
		if (i % 3 == 0)
			cout << "";
		else
			cout << i << " ";
}