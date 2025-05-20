#include<iostream>
using namespace std;

typedef struct Address
{
	int hNo;
	int pincode;
	string addline1;
	string addline2;
	string city;
	string state;

}ADDRESS;
struct Employee
{
	int id;
	string name;
	struct Date {
		int day, month, year;
	}d;
	ADDRESS addr;
};
int main()
{
	struct Employee e;
	e.id = 1001;
	e.name = "Lekshmi";
	e.d.day = 13;
	e.d.month = 10;
	e.d.year = 2001;

	cout << e.id << "\t" << e.name << "\t" << e.d.day << "/" << e.d.month << "/" << e.d.year;
}