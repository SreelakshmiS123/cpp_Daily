#include <iostream>
#include <string> 
using namespace std;
class Employee {
protected:
    int empId;
    string name;

public:
    Employee(int id, string n) :empId(id), name(n) {
        cout << "Employee Constructor Called" << endl;
    }
    void display() const {
        cout << "Tech Lead Info:" << endl;
        cout << "EmpId: " << empId << endl;
        cout << "Name: " << name << endl;
    }
};
class Developer :public Employee
{
protected:
    int codingHours;
public:
    Developer(int id, string n, int c) :Employee(id, n), codingHours(c){}
    void salarybyCoding() const {
        int salary = codingHours * 500;
        cout << "Salary based on coding hours: " << salary << endl;
    }
};
class Manager :public Employee
{
protected:
    int teamSize;
public:
    Manager(int id,string n,int t):Employee(id,n),teamSize(t){}
    void salarybyTeam() const
    {
        int salary = teamSize * 5000;
        cout << "Salary based on team size: " << salary << endl;
    }
};
int main()
{

}