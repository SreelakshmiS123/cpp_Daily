#include<iostream>
using namespace std;
int main()
{
	char str[30];
	cin.getline(str, 30);
	int count = 0;
	for (int i = 0;i < strlen(str);i++)
	{
		if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
			count++;
		}
	}
	cout << "Count of vowels: " << count;
}