#include<iostream>
bool palindrome(char str[], int start, int end)
{
	if (start >= end)
		return 1;
	if (str[start] != str[end])
		return false;

	return palindrome(str, start + 1, end - 1);
}
using namespace std;
int main()
{
	char str[30];
	cin.getline(str, 29);

	if (palindrome(str, 0, strlen(str) - 1))
		cout << "Is a palindrome string";
	else
		cout << "Not a palindrome string ";


}