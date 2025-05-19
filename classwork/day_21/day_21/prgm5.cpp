//count the no.of vowels in a string
#include<iostream>
using namespace std;
int vowelCount(char*);

int main()
{

	char str[30];
	cin.getline(str, 29);
	cout << vowelCount(str);

}
int vowelCount(char* ptr)
{
   int count=0;
	while (*ptr)
	{
		if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' ||
			*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
		{
			count++;
		}
		ptr++;
	}
	return count;
}