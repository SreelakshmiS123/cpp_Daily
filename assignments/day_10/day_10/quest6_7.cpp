//form a new number
#include<iostream>
int firstDig(int);
using namespace std;
int main()
{
	int n1, n2,fd,sd;
	cout << "Enter the values of n1 and n2"<<endl;
	cin >> n1 >> n2;
	sd = n1 % 10;
	int newD = sd * 10 + firstDig(n2);
	cout << newD;
}
int firstDig( int n2)
{
	while (n2 > 10)
		n2=n2/10;
	return n2;
}