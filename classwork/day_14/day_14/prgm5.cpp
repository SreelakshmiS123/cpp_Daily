#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	if (ch >= 65 && ch <= 122)
	{
		cout << "Is a alphabet";
	}
	else
		cout << "Not a alphabet";
}