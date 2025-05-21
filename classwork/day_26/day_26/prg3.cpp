#include<iostream>
#include<cstring>
using namespace std;
class Student
{
private:
	int rollno;
	char name[20];
public:
	void display()
	{
		cout << "Name: " << name << endl;
	}
	void setName(char* s)
	{
		strcpy_s(name, s);
	}
};
int main()
{
	Student s;
	char sName[] = "Lekshmi";
	cout << sizeof(s) << endl;
	s.setName(sName);
	s.display();
}