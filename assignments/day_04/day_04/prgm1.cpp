#include<iostream>
using namespace std;
int main()
{
	int n,dig;
	int sum = 0, pro = 1;
	cout << "Enter the value of n: ";
	cin >> n;
	while (n > 0)
	{
		dig = n % 10;
		sum = sum + dig;
		pro = pro * dig;
		n = n / 10;
}
	cout << "Sum of digits of the number is " << sum << endl;
	cout << "Product of digits of the number is " << pro;

}