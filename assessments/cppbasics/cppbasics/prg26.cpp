#include<iostream>
using namespace std;
int main()
{
	int count = 0;
	char str1[30], str2[30];
	cin.getline(str1, 29);
	cin.getline(str2, 29);
	if (strlen(str1) != strlen(str2))
	{
		cout << "Not an anagram";
	}
	else
	{
		for (int i = 0;i < strlen(str1);i++)
		{
			for (int j = 0;j < strlen(str2);j++)
			{
				if (str1[i] == str2[j])
					count++;
			}

		}

		if (count == strlen(str1))
			cout << "Is anagram ";
		else
			cout << "Not an anagram";
	}
}