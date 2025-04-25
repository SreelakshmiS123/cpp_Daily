//Check whether a number is amstrong or not
#include<iostream>
using namespace std;
int main()
{
	int n;
	int temp;
	int dig;//For store seperate digit from number
	int sum = 0;//
	cout << "Enter the value of n: ";
	cin >> n;
	temp = n;

	while(n!=0)
			{
				dig = n % 10;
				sum = sum + (dig*dig*dig);
				n = n / 10;

			}

	cout << sum<<endl;
	if (sum == temp)
		cout << "Is armstrong number";
	else
		cout << "Not a armstrong number";
}