//Digit frequency
#include<iostream>
using namespace std;
int main()
{
	int n, dig;
	//int count[10];
	cout << "Enter the value of n: ";
	cin >> n;

	for (int i = 0;i <= 9;i++)
	{
		int count = 0;
		int temp = n;
	
		while (temp != 0)
		{
			dig = temp% 10;
			if (dig == i) {
				count++;
			}
			temp = temp / 10;
		}
		cout << "Digit frequency of " << i << ":" << count<<endl;
	}
}
	