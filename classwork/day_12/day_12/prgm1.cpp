/*2-D array
    
	10  20  30
	40  50  60
	70  80  90
*/

#include<iostream>
#define ROW 3
#define COL 3

using namespace std;
int main()
{
	int count;
	int arr1[ROW][COL] = {{ 10,20,30 }, { 40,50,60 }, { 70,80,90 }};
	int arr2[ROW][COL] = {10,20,30,40,50,60,70,80,90};
	int arr3[ROW][COL];

	for (int i = 0,count=0;i < ROW;i++)
	{
		for (int j = 0;j < COL;j++)
		{
			cout << "Address of arr1["<<count++<<"] = " << (unsigned long int) & arr1[i][j] << " value: " << arr1[i][j] << endl;
		}
	}

	cout << "===================" << endl;


	for (int i = 0, count = 0;i < ROW;i++)
	{
		for (int j = 0;j < COL;j++)
		{
			cout << "Address of arr2[" << count++ << "] = " << (unsigned long int) & arr2[i][j] << " value: " << arr1[i][j] << endl;
		}
	}
	cout << "===================" << endl;

	for (int i = 0, count = 0;i < ROW;i++)
	{
		for (int j = 0;j < COL;j++)
		{
			
				cout << "Enter the "<<count++<<"item value: ";
			    cin >> arr3[i][j];
		} 
	}

	cout << "===================" << endl;


	for (int i = 0, count = 0;i < ROW;i++)
	{
		for (int j = 0;j < COL;j++)
		{
			cout << "Address of arr3[" << count++ << "] = " << (unsigned long int) & arr3[i][j] << " value: " << arr3[i][j] << endl;
		}
	}
	int arr4[ROW][COL] = { 10,102,103,104 };
	int arr5[ROW][COL] = { 0, };
	//bzero or memset or explicitly run the loop to reinit it to sero
	return 0;

}