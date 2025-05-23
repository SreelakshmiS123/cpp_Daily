#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
	int e_id;
	string e_name;
public:
	Employee();
	Employee(int, string);

public:
	void disp();
	~Employee() {
		cout << "Destructor getting called";
	}
};
Employee::Employee()
{
	cout << "Default construct got called" << endl;
}
