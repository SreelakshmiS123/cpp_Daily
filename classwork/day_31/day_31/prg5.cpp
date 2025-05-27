#include<iostream>
#include<string>
using namespace std;
class vehicle
{
protected:
	int wheels;
	string engine;
	int seats;
public:
	vehicle(int wheels,string engine,int seats)
	{
		this->wheels = wheels;
		this->engine = engine;
		this->seats = seats;
	}
};
class Car :public vehicle
{
public:
	Car(int wheels, string engine, int seats)
	{
		vehicle(wheels, engine, seats);
	}
	void setWheels()
	{
		cout << "Enter the no.of wheels: ";
		cin >> wheels;
	}
	void setEngine()
	{
		cout << "Enter the type of engine: ";
		cin >> engine;
	}
	void setSeats()
	{
		cout << "Enter the no.of seating capacity: ";
		cin >> seats;
	}
	void display()
	{
		cout << "No.of wheels of the car: " << wheels;
		cout << "Type of engine of the car: " << wheels;
		cout << "Seating capacity of the car: " << wheels;

	}
};
int main()
{
	Car c;
	c.
}