#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fOut("multiplication.txt");
	for (int i = 1;i <= 10;i++)
	{
		fOut << "2 * " << i << " = " << 2 * i << endl;
	}
	fOut.close();
}