#include<iostream>
using namespace std;
int main()
{
	char line[] = "This is a CPP Programming class";
	//char ch = 'p';
	char ch = 'C';

	cout << "BA line: " << (unsigned long int)line << endl;

	char* res = strchr(line, ch);

	if (res != nullptr)
		cout << "\t" << res << endl;
	else
		cout << "Character not found " << endl;

	char substr[] = "is";
	char* res1 = strstr(line, substr);

	if (res1 != nullptr)
		cout << "\t" << res1 << endl;
	else
		cout << "Character not found";
	return 0;
}