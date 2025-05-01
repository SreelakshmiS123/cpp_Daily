#include<iostream>
int towerOfoddity(int);
using namespace std;
int main()
{
	int n;
	//int total = 20;
	cout << "Enter the floor no.to go: ";
	cin >> n;
	towerOfoddity(n);
}
int towerOfoddity(int n)
{
	if (n <= 0)
		return 0;
	else
		for (int i = 1;i <= n;i = i + 2)
			cout << "Floor number: "<<i << endl;

}