#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fOut("multiplication.txt",ios::trunc);
	
	for (int i = 1;i <= 10;i++)
	{
		fOut << "3 * " << i << " = " << 3 * i << endl;
	}
	fOut.close();
}