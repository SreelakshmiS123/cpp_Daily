#include<iostream>
int towerOfoddity(int,int);
using namespace std;
int main()
{
	int n;
	int total = 20;
	cout << "Enter the floor no.to go: ";
	cin >> n;
	towerOfoddity(n,total);
}
int towerOfoddity(int n,int total)
{
	if (n > total)
		return 0;
	else
		cout <<(total)<< " ";
	towerOfoddity(total-2,n);

}