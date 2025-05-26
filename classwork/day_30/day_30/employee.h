#pragma once
#include<iostream>
#include<string>
using namespace std;
class Employee
{
	int id;
	string name;
	float salary;
	//Employee* next;
public:
/*	Employee(int ID, string n, float s)
	{
		id = ID;
		name = n;
		salary = s;
	}*/
	void setID(int);
	void setName(string);
	void setSalary(float);
	int getID();
	string getName();
	float getSalary();
	void setNext(Employee*);
	Employee* getNext();
};
void Employee::setID(int ID)
{
	id = ID;
}
void Employee::setName(string n)
{
	name = n;
}
void Employee::setSalary(float s)
{
	salary = s;
}
int Employee:: getID()
{
	return id;
}
string Employee:: getName()
{
	return name;
}
float Employee::getSalary()
{
	return salary;
}

class Node
{
	Employee emp;
	Node* next;
public:
	Node(Employee e)
	{
		emp = e;
		next = nullptr;
	}
	void setValue(Employee);
	Employee getValue();
	void setNext(Node* nn);
	Node* getNext();

};
void Node::setValue(Employee e)
{
	emp = e;
}
Employee Node:: getValue()
{
	return emp;
}
void Node::setNext(Node* nn)
{
	next = nn;
}
Node* Node::getNext()
{
	return next;
}

class employeeLL {
private:
	employeeLL* head;
public:
	employeeLL() {

		head = nullptr;
	}
	//LinkedList(int) {}

	//int addBeg(int);
	void addEmp(int,string,float);
	void displayEmp();
	bool delEmpbyid(int);
	string searchEmpbyname(string);
	bool updateSalbyid(int);
	int countTotal();
};