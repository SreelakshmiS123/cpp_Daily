#include<iostream>
using namespace std;
int main()
{
	int n;
	int d=0;
	cout << "Enter the value of n: ";
	cin >> n;
	int count = 0;

	for (int i = 1;i < n;i++)
		for (int j = 1;j < n;j++)
			for (int k = 1;k < n;k++)
				d = n - (i + j + k);
				if (d >= 1)
					count++;
			
	cout << "No.of ways: " << count;
}