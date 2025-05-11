#include<iostream>
#include<cstring>
#define MAX 30
int whiteSpace(char s1[], char s2[]);
using namespace std;
int main()
{
	//whiteSpace(s2);

	
	char s1[MAX], s2[MAX] = { 0 };
	cin.getline(s1, MAX - 1);
	whiteSpace(s1, s2);
	cout << s2;

	/*
	int j = 0;
	for (int i = 0;i < MAX;i++)
	{
		if (s1[i] == ' ')
		{
			continue;
		}
		else
		{
			s2[j] = s1[i];
			j++;
		}
	}
	s2[j]='\0';
	cout << s2;
}
*/
}
	int whiteSpace(char s1[], char s2[])
	{
		int j;
		for (int i = 0,j=0;i < MAX;i++)
		{
			if (s1[i] == ' ')
			{
				continue;
			}
			else
			{
				s2[j] = s1[i];
				j++;
			}
		}
		return s2[j];
	}
