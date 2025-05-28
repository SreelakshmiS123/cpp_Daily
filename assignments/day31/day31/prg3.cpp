#include <iostream>
#include <string> 
using namespace std;
class Vehicle {
protected:
    int vehicleId;
    string type;
    int ratePerKm;
    int distance;
    Vehicle(int id, string t,int r,int d):vehicleId(id),type(t),ratePerKm(r),distance(d){}

    void display()
    {
        cout << "Vehicle type: " << type << endl;
        cout << "Vehicle ID: " << vehicleId << endl;
        cout << "Rate per km: " << ratePerKm<<endl;
    }
    void calculateFare()const
    {
        int fare = distance * ratePerKm;
        cout << "Fare without discount: " << fare << endl;
    }
};
class Car :public Vehicle
{
public:
    Car(int id) {}
};
int main()
{

}
