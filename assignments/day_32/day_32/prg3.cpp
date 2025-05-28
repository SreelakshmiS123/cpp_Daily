#include<iostream>
using namespace std;
class Vehicles
{
protected:
	int price;
public:
	Vehicles(int p) :price(p) {}

};
class Car :public Vehicles
{
protected:
	int seat_capacity;
	int noofDoors;
	int fuel_type;
public:
	Car(int p, int sc, int nd, int ft) :Vehicles(p), seat_capacity(sc), noofDoors(nd), fuel_type(ft) {}

};
class Audi :private Car
{
	string model_type;
public:
	Audi(int p, int sc, int nd, int ft, string mt) :Car(p, sc, nd, ft), model_type(mt) {}
	void dispA()
	{
		cout << "Audi" << endl;
		cout << "Price: " << price << endl;
		cout << "Seat Capacity: " << seat_capacity << endl;
		cout << "No of Doors: " << noofDoors << endl;
		cout << "Fuel Type(Petrol/Diesel): " << fuel_type << endl;
		cout << "Model Type: " << model_type << endl;
	}
};
class Motorcycle :public Vehicles
{
protected:
	int noOfCylinders;
	int noOfWheels;
	int noOfGears;
public:
	Motorcycle(int p, int nc, int nw, int ng) :Vehicles(p), noOfCylinders(nc), noOfWheels(nw), noOfGears(ng) {}

};
class Yamaha :private Motorcycle
{
protected:
	string make_type;
public:
	Yamaha(int p, int nc, int nw, int ng, string mk) :Motorcycle(p, nc, nw, ng), make_type(mk) {}
	void dispY()
	{

		cout << "Yamaha" << endl;
		cout << "Price: " << price << endl;
		cout << "No of cylinders: " << noOfCylinders << endl;
		cout << "No of Wheels: " << noOfWheels << endl;
		cout << "No of Gears: " << noOfGears << endl;
		cout << "Make Type: " << make_type << endl;
	}
};
int main()
{
	Audi a(20000000, 4, 4, 2, "S series");
	Yamaha y(100000, 3, 2, 2, "fz");
	a.dispA();
	y.dispY();
}