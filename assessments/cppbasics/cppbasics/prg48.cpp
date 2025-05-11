#include<iostream>
using namespace std;
int main()
{
int dec, dig;
int binary[10];
cin >> dec;
int temp = dec;
int i = 1;
while (temp != 0)
{
	binary[i] = temp % 2;
	temp = temp / 2;
	i++;
}
int len = sizeof(binary) / sizeof(binary[0]);

for (int j =i-1 ; j > 0; j--)
cout << binary[j];
}