//octal to decimal
#include<iostream>
using namespace std;
int main()
{
	/*
	int oct,dec=0,place=0;
	cin >> oct;
	int temp = oct;

	while (temp)
	{
		int dig = temp % 10;
		dec = dec + dig * pow(8, place);
		temp = temp / 10;
		place++;
	}
	cout << dec;
	*/


	
	int dec, dig;
	int oct[10];
	cin >> dec;
	int temp = dec;
	int i=1;
	while (temp != 0)
    {
        oct[i] = temp % 2;
        temp = temp / 2;
		i++;
    }
   
    for (int j = i-1; j > 0; j--)
        cout << oct[j];
}