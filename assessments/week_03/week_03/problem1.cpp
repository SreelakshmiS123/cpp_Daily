#include<iostream>
#include <string>
using namespace std;
int main()
{
	//string str="We are playing football";
	//cout << str;
	string str;
	cout << "Enter the sentence: ";
	getline(cin,str);
	int posare = -1;
	int posi = -1;

	//str.length()
	for (int i = 0;i<=str.length();i++)
	{
		if (str[i] == 'a' && str[i + 1] == 'r' && str[i + 2] == 'e')
		{
			posare = i;
			break;
		}
	}
	for(int i = 0;i <= str.length();i++)
	{
		if (str[i] == 'i')
		{
			posi = i;
			break;
		}
	}
	int sum = posare + posi;
	cout << "Sum of position= " << sum;
}

/*
Enter the sentence: there are fruits in the basket
Sum of position= 19*/