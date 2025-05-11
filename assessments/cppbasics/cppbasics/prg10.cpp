#include<iostream>
using namespace std;
int main()
{
	char str[30],str2[30];
	cin.getline(str, 30);
	
	int j = 0;
	for (int i = 0;i < strlen(str);i++)
	{
		if (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u')
		{
			str2[j] = str[i];
			j++;
		}
	}
	str2[j] = '\0';
	cout << "Vowels removed string: " << str2;
}