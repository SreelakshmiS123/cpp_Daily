#include<iostream>
using namespace std;
int main()
{
	char str[20];
	
	cin.getline(str,20);
	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	cout << "String length: " << count;
}