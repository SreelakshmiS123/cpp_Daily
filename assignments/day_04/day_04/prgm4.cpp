#include<iostream>
int sumDig(int n)
{
	bool digits[10] = { false };
	int sum = 0;
	while (n > 0) {
		int dig = n % 10;
		if (!digits[dig]) {
			digits[dig] = true;
			sum = sum + dig;
		}
		n = n / 10;
	}
	return sum;
}
using namespace std;
int main()
{
	int num1, num2;
	cin >> num1 >> num2;
	if (sumDig(num1) == sumDig(num2))
		cout << "Yes" << endl;
	else
		cout << "No";
}