#include<iostream>
using namespace std;
int main()
{
	string err = "Error 110";
	string dbyZero = "can't divide by zero";
	string nullPtrerr = "Memory allocation failed";
	char* ptr = nullptr;
	int n1 = 10, n2 = 0;
	try
	{
		if (n2 == 0) {
			throw dbyZero;;
		}
	}
	catch (int e)
	{
		cout << "Caught an exception: " << e << endl;
	}
	catch (const string e)
	{
		cout << "Caught an exception: " << e << endl;
	}
}