#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string line;
	ifstream fIn("multiplication.txt");
	if(!fIn.is_open())
	 cout << "Error:opening the file";
	while (getline(fIn, line))
		cout << line << endl;
	fIn.close();
}