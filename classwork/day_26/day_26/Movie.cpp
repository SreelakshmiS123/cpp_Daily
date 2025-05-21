#include<iostream>
#include "movie.h"
using namespace std;
void Movie::addMovie()
{
	cout << "Enter movie name: ";
	cin >> title;
	cout << "Enter movie genre: ";
	cin >> genre;
	cout << "Enter your rating for the movie: ";
	cin >> rating;
}

void Movie::display()
{
	if (rating >= 8 && rating<=10)
	{
		cout << "HIT";
	}
	else if(rating < 8 && rating >= 4)
	{
		cout << "AVERAGE";
	}
	else if (rating < 4 && rating>=0)
	{
		cout << "FLOP";
	}
	else
	{
		cout << "Invalid rating";
	}
}