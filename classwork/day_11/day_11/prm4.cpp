//first part of array odd nos and 2nd part even no.s
#ifdef __INTELLISENSE__
#pragma diag_suppress 28
#endif
#include<iostream>
using namespace std;
int main()
{


	int arr[] = { 11,13,12,15,8,6,4,3,7,1 };
	int i, countOdd, countEven;
	constexpr int noElms = sizeof(arr) / sizeof(arr[0]);
	int outputArr[noElms];
	cout << "No.of elements present: " << noElms << endl;
	for (i = 0, countOdd = 0;i < noElms;i++)
		if (i % 2 != 0)
		{
			outputArr[countOdd] = arr[i];
			countOdd++;
		}
	for (i = 0, countOdd = countOdd;i < 10;i++)
		if (i % 2 == 0)
		{
			outputArr[countEven] = arr[i];
			countEven++;
	/*
	int arr[10];
	for(i=0,countOdd=0;i<10;i++)
		if (i % 2 != 0)
		{
			arr[countOdd] = i;
			countOdd++;
		}
	for (i = 0, countOdd = countOdd;i < 10;i++)
		if (i % 2 == 0)
		{
			arr[countEven] = i;
			countEven++;
			*/
}
