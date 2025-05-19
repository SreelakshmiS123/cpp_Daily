#include<iostream>
#include<cstdlib>
using namespace std;
void display(char[]);
int main()
{
	char s[] = "Sab";
	display(s);

}
void display(char name[])
{
	while (*name != '\0')
	{
		cout << *name++;
	}
	cout << endl;
}