#include<iostream>
using namespace std;
class Vehicle
{
protected:
	string make;
	string model;
public:
	Vehicle(string m, string mo) :make(m), model(mo)
	{
		cout << "Starting the Generic Vehicle" << endl;
		cout << "Stopping the Generic Vehicle" << endl;
	}

	void start()
	{
		cout << "starting the " << make << " " << model<<endl;
	}
	void stop()
	{
		cout << "Stopping the "<<make<<" "<<model<<endl;
	}
};
class Car :public Vehicle
{
protected:
	int doors;
public:
	Car(string m, string mo,int d):Vehicle(m,mo),doors(d){}

	void honk()
	{
		cout << " Honking the horn of the " << make << " " << model<< endl;
	}
};
int main()
{
	Car c("Toyota","Camry",4);
	c.start();
	c.honk();
	c.stop();


}