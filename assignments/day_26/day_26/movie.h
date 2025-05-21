#pragma once
#pragma once
class Movie
{
protected:
	char title[30];
	char genre[30];
	int rating;
public:
	void addMovie();
	void display();
};