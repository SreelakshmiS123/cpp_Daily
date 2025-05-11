#include<iostream>
int lengthOfstr(char str[], int start)
{
	if (str[start]== '\0')
		return 0;

	return 1+ lengthOfstr(str,start+1);

}
using namespace std;
int main()
{
	int count;
	char str[30];
	cin.getline(str, 29);

	cout << "Length of string: " << lengthOfstr(str,0);
}