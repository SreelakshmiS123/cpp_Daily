#include<iostream>
using namespace std;

class Student
{
protected:
	int rollno;
	string name;
public:
	void display(string str1)
	{
		cout << "Hello World" << str1 << endl;
		cout << "Name: " << name << endl;
	}
	void setName(string s)
	{
		name = s;
	}

};
int main()
{
	Student s;
	//s.rollno = 56;
	//s.name = "Lakshmi";
	//s.dept = "CS";
	s.display("Sree");
	s.setName("lekshmi");
		s.display("Sree");
}