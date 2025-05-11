//length of the string without strlen() and not count the null char
//trimming a string
//"__lakshmi__"
#include<iostream>
using namespace std;
int main()
{
	char ch = '\0';
	int count = 0;
	char str1[10];
	cin >> str1;
	
	while ((ch = str1[count] != '\0'))
		count++;
	cout << count;
}
/*
while(str1[count++!='\0); it will internally increment and count null char also.
cout<<count-1;    
*/