// Check if a Number is Divisible by Both 3 and 5

#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n % 3 == 0 && n % 5 == 0)
		cout << "Divisible";
	else
		cout << "Not divisible";

}