/*Amstrong Number*/
#include<iostream>
using namespace std;
int main() {
	int n1, dig, sum = 0;
	cout << "Enter the number: " << endl;
	cin >> n1;
	//n2 = n1;
	int count = 0;

	int temp = n1;
	while (temp > 0) {
		count++;
		temp /= 10;
	}
	temp = n1;
	while (temp > 0) {
		dig = temp % 10;

		int num = 1;
		for (int i = 0;i < count;i++) {
			num *= dig;
		}
		sum += num;
		temp /= 10;
	}
	if (sum == n1) {
		cout << n1 << " is a amstrong number" << endl;
	}
	else {
		cout << n1 << " is a not amstrong number" << endl;
	}
	return 0;
}