#include<iostream>
using namespace std;
struct Date {
	int day, month, year;
};
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
	Date joiningDate;
	ADDRESS addr;
};
int main()
{
	struct Employee e;
	e.id = 1001;
	e.name = "Lekshmi";
	e.joiningDate.day = 13;
	e.joiningDate.month = 10;
	e.joiningDate.year = 2001;

	cout << e.id << "\t" << e.name << "\t" << e.joiningDate.day << "/" << e.joiningDate.month << "/" << e.joiningDate.year;
}