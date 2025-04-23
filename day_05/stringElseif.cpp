#include<iostream>
#include"switch.h"
using namespace std;
int stringElseif()
{
	string genre;
	cout << "Enter the Genre: " << endl;
	cin >> genre;
	if (genre[0] >= 48 && genre[0] <= 57)
	{
		cout << "Genre name can't start with numeric characters" << endl;
		return 0;
	}
	if (genre.compare("Action") == 0)
	{
		cout << "Selected genre is Action" << endl;
	}
	else if (genre.compare("Comedy") == 0||(genre.compare("comedy")==0))
	{
		cout << "Selected genre is Comedy" << endl;
	}
	else if (genre.compare("Thriller") == 0)
	{
		cout << "Selected genre is Thriller" << endl;
	}
	else
	{
		cout << "Genre is not present" << endl;
	}
	cout << "end of program" << endl;
	return 0;
}