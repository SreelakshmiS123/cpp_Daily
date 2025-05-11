#include<iostream>
using namespace std;
int main()
{
	char line[] = "This is a CPP Programming class";
	//char ch = 'p';
	char ch = 'C';

	
	char* res = strchr(line, ch);

	if (res != nullptr)
		cout << "\t" << res << endl;
	else
		cout << "Character not found " << endl;
	return 0;
}