#include<iostream>
using namespace std;
void addEmployee(EMP);
bool displayEmployee();
typedef struct employeeDetails
{
	int id;
	string name;
	string dept;
}EMP;
/*typedef struct workingTime
{
	int hour;
	int min;
};
*/
void addEmployee(EMP e)
{
	//employeeDetails EMP;
	cout << "Enter the employee ID: " << endl;
	cin >> e.id;
	cout << "Enter the employee name: " << endl;
	cin >> e.name;
	cout << "Enter the employee department: " << endl;
	cin >>e.dept;

	
}
bool displayEmployee(EMP &e)
{
	
	{
		cout << "Employee ID: " << e.id << endl;
		cout << "Employee name: " << e.name << endl;
		cout << "Employee department: " << e.dept << endl;

	}
}
int main()
{
	addEmployee();
	displayEmployee();
}