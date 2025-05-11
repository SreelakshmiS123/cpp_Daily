#include<iostream>
void reverse(char str[], int start, int end)
{
	char temp;
	if (start >= end)
		return;
	temp = str[start];
	str[start] = str[end];
	str[end] = temp;

	reverse(str, start + 1, end - 1);

}
using namespace std;
int main()
{
	char str[30];
	cin.getline(str, 29);

	reverse(str, 0, strlen(str) - 1);
	cout << str;

}