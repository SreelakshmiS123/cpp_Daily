//storing 
#include<iostream>
using namespace std;
int main()
{
	int arr[10] = { 11,13,12,15,8,6,4,3,7,1 };
	int i,countOdd,countEven;
	//cout << "Enter the no.of elements in an array";
	//cin >> n;
	int noElm
	for (i = 0, countOdd = 0;i < 10;i++)
	{
		if (i % 2 != 0)
		{
			arr[countOdd] = i;
			countOdd++;
		}
	for (i = 0, countOdd = 0;i < 10;i++)
		{
			if (i % 2 == 0)
			{
				arr[countEven] = i;
				countEven++;
			}
	}
	for (i = 0;i < 10;i++)
		cout << arr[i];
}