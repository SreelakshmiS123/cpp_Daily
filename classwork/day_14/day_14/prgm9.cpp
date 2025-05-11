#include<iostream>
#include<cstring>
#define MAX 30
using namespace std;
int main()
{
	char s1[MAX];
	char s2[MAX];
	cin.getline( s1,MAX-1);
	int j = 0;
	for (int i = 0;i <= strlen(s1);i++)
	{

		if (s1[i] != 'A' && s1[i] != 'E' && s1[i] != 'I' && s1[i] != 'O' && s1[i] != 'U' && s1[i] != 'a' && s1[i] != 'e' && s1[i] != 'i' && s1[i] != 'o' && s1[i] != 'u')
		{
			s2[j] = s1[i];
			j++;
		}
	}
	
	s2[j] = '\0';
		cout << s2;
	

}