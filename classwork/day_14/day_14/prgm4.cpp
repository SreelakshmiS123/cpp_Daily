//check whether a char is vowel or consonent
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		cout << "Is a vowel";
	}
	else
	{
		cout << "Is a consonent";
	}
}