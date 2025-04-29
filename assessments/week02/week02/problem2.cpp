//Digit frequency
#include<iostream>
using namespace std;

int main() {

	long int n;
	cout << "Enter n: ";
	cin >> n;

	int i0 = 0, i1 = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0, i6 = 0, i7 = 0, i8 = 0, i9 = 0;
	int n1 = n;
	while (n1 > 0)
	{
		int dig = n1 % 10;
		switch (dig)
		{
		case 0:
			i0++;
			break;
		case 1:
			i1++;
			break;
		case 2:
			i2++;
			break;
		case 3:
			i3++;
			break;
		case 4:
			i4++;
			break;
		case 5:
			i5++;
			break;
		case 6:
			i6++;
			break;
		case 7:
			i7++;
			break;
		case 8:
			i8++;
			break;
		case 9:
			i9++;
			break;
		}
		n1 /= 10;
	}
	cout << "Frequency of 0: " << i0<<endl;
	cout << "Frequency of 1: " << i1 << endl;
	cout << "Frequency of 2: " << i2 << endl;
	cout << "Frequency of 3: " << i3 << endl;
	cout << "Frequency of 4: " << i4 << endl;
	cout << "Frequency of 5: " << i5 << endl;
	cout << "Frequency of 6: " << i6 << endl;
	cout << "Frequency of 7: " << i7 << endl;
	cout << "Frequency of 8: " << i8 << endl;	
	cout << "Frequency of 9: " << i9 << endl;


	
}
/*
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
}*/