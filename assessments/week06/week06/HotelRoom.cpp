#include<iostream>
#include<string>
#include"hotel.h"
using namespace std;

HotelRoom::HotelRoom(int num, string type)
{
	roomNumber = num;
	roomType = type;
	isBooked = 0;
}
void HotelRoom::bookRoom()
{
	if (!isBooked)
	{
		isBooked = 1;
		
		//cout << "Room " << roomNumber << " booked" << endl;

	}
	else
	{
		cout << "Room " << " already boked" << endl;

	}
}
void HotelRoom::showStatus()
{
	cout << "Room " << roomNumber ;
	cout << " (" << roomType <<") ";
	//cout << "Booking status: ";
	if (isBooked)
	{
		cout<<"is now booked"<<endl;
	}
	

}