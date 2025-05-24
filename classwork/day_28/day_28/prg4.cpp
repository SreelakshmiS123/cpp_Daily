#include<iostream>
#define MAX 20
using namespace std;
class Employee
{
protected:
	int id;
	string name;
public:
	/*Employee(int ID, string n)
	{
		id = ID;
		name = n;
	}*/
	void setID(int ID)
	{
		id = ID;
	}
	int getID()
	{
		return id;
	}
	void setName(string n)
	{
		name = n;
	}
	string getName()
	{
		return name;
	}

};
class Stack
{
	Employee emp[MAX];
	int top;
public:
	Stack()
	{
		top = 0;
	}
};
int main()
{

}