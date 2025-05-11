#include<iostream>
using namespace std;
int main()
{
	char s[1024];
	cin.getline(s,1024);
	int count[26] = { 0, };
	for (int i = 0;i < 26;i++)
		count[i] = 0;
	for (int i = 0;i < strlen(s);i++)
	{
		count[s[i] - 'a']++;
	}
	for (int i = 0;i < 26;i++)
	{
		if (count[i] > 0)
		{
			cout << char(i + 'a') << "-" << count[i] << endl;
		}
	}

}