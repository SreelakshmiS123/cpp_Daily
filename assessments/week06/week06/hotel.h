#pragma once
#include<string>
using namespace std;
class HotelRoom
{
protected:
	int roomNumber;
	string roomType;
	bool isBooked;
public:
	HotelRoom(int num, string type);
	void bookRoom();
	void showStatus();
};