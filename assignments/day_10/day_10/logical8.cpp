#include<iostream>
using namespace std;
int main()
{
	int energy,power=1;
	cout << "Input energy: ";
	cin >> energy;

	while (power * 2 <= energy)
	{
		power *= 2;

	}
	cout << power;
}