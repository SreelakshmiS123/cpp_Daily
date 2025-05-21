#include<iostream>
using namespace std;

class Student
{
public:
	int rollno;
	string name;
	string dept;

};
int main()
{
	Student s;
	s.rollno = 56;
	s.name = "Lakshmi";
	s.dept = "CS";
	cout << "Rollno.: " << s.rollno << endl;
	cout << "Name: " << s.name << endl;
	cout << "Department: " << s.dept << endl;

}