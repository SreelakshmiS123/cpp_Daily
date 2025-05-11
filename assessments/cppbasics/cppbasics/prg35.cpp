#include<iostream>
using namespace std;
int main()
{
	char str1[50], str2[50];
	cin.getline(str1, 49);
	int j = 0;
	for (int i = strlen(str1) - 1; i >= 0;i--)
	{
		str2[j] = str1[i];
		j++;
	}
	str2[j] = '\0';

	cout << str2;
}