#include<iostream>
int countOfzero(int);
using namespace std;
int main()
{
	int n;
	cout << "Enter the n: ";
	cin >> n;
	int result = countOfzero(n);
}
int countOfzero(int n)
{
	if (n == 0)
		return 0;
	if (n % 10 == 0)
		cout<< 1 + countOfzero(n / 10);
	else
		cout<< countOfzero(n / 10);

}