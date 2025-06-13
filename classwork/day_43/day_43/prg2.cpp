#include<iostream>
#include<iterator>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class Employee
{
	int id;
	string name;
public:
	Employee():id(0),name(""){}
	Employee(int id, string name) :id(id), name(name){}
	Employee(const Employee& others)
	{
		this->id = others.id;
		this->name= others.name;

	}
	void disp() const
	{
		cout << "ID: "<<id<<"\tName: "<<name<<endl;
	}
	void setID(int id)
	{
		this->id = id;
	}
	int getID() const
	{
		return id;
	}
	void setName(string name)
	{
		this->name = name;
	}
	string getName() const
	{
		return name;
	}

	friend istream& operator >>(istream& is, Employee& e)
	{
		is >> e.id >> e.name;
		return is;
	}

	friend ostream& operator <<(ostream& os, Employee& e)
	{
		os << "ID: " << e.id << "\tName: " << e.name << endl;
		return os;
	}
};
int main()
{
	int id;
	string name;

	istream_iterator<Employee> inIt(std::cin);//begin of input stream
	istream_iterator<Employee> endIt;

	vector<Employee>emp(inIt, endIt);
	while (inIt != endIt) 
	{
		emp.push_back(*inIt);
		++inIt;
	}
	for (auto e : emp)
		e.disp();
}