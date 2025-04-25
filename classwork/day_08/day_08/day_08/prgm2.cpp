//function with  args and no return type
#include<iostream>
using namespace std;
void display(void);
void sumInt(int, int);
int main()
{
	int ch;
	display();
	cin >> ch;
	switch (ch)
	{
	default:
		cout << "Wrong choice" << endl;
		break;
	case 1:
		cout << "Addition" << endl;
		sumInt(10, 20);
		break;
	case 2:
		cout << "Subtraction" << endl;
		break;
	case 3:
		cout << "Exit" << endl;
		break;
	}
	return 0;
}
void display()
{
	cout << "Press, " << endl;
	cout << "1.Addition " << endl;
	cout << "2.Subtraction " << endl;
	cout << "3.Exit " << endl;
	cout << "Choice" << endl;

}
void sumInt(int v1, int v2)
{
	cout << v1 << "+" << v2 << "=" << (v1 + v2) << endl;
}