#include<iostream>
using namespace std;
int main()
{
	char str[30], str2[30];
	cin.getline(str, 30);
	int j = 0;
	for (int i = 0;i < strlen(str);i++)
	{
		if (str[i] != ' ' )
		{
			str2[j] = str[i];
			j++;
		}

	}
	str2[j] = '\0';
	cout << "String after removal: " << str2;
}