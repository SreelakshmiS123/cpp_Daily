//Check if a Character is an Uppercase Letter
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	if (ch >= 'A' && ch <= 'Z')
		cout << "Upper case";
	else
		cout << "Not upper case";
}