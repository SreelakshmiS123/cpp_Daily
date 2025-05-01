#include<iostream>
int numberMirror(int n);
using namespace std;
int main()
{
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	numberMirror(n);

}
int numberMirror(int n)
{
	int dig;
	if (n == 0)
		return 0;
	else {
		cout << n % 10<<" ";
		numberMirror(n / 10);
	}
	//n = n / 10;
	//n = numberMirror(n / 10);

}