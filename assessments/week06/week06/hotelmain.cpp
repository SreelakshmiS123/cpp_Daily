#include<iostream>
#include<string>
#include"hotel.h"
using namespace std;
int main()
{
	int rnum;
	string type;
	
	HotelRoom h1(201, "AC");
	h1.bookRoom();
	h1.showStatus();
	h1.bookRoom();
	
}