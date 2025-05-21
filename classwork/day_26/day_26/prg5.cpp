#include<iostream>
#include<cstring>
using namespace std;
class Student
{
private:
	int rollno;
	char name[20];
	char cls[5];
	char spec[20];
	string sub[3];
public:
	void setName(char* s)
	{
		strcpy_s(name, s);
	}
	char* getName()
	{
		return name;
	}
	void setRollno(int r)
	{
		rollno = r;
	}
	int getRollno()
	{
		return rollno;
	}
	void setClass(char* s)
	{
		strcpy_s(cls, s);
	}
	char* getClass()
	{
		return cls;
	}
	void setSpecial(char* s)
	{
		strcpy_s(spec, s);
	}
	char* getSpecial()
	{
		return spec;
	}
	void setSub(string s)
	{
		for (int i = 0;i < 5;i++)
		{
			sub[i]=s;
		}
	}
	void getSub()
	{
		cout<< sub;
		
	}
	void setMark()
	void display()
	{
		cout << "Name: " << name << endl;
		cout << "Roll No.:" << rollno << endl;
	}
};
int main()
{

	char n[] = "abc";
	char str2[] = "xyz";
	char cls[] = "IV";
	char spec[] = "Computer Science";
	string sub[3] = { "DSA","CO","CN" };
	float m[3] = { 90,85,99 };
	int r = 1011;
	Student s1;
	s1.setRollno(r);
	s1.setName(n);
	s1.setClass(cls);
	s1.setSpecial(spec);
	//s1.display();
	cout <<"Student name: " <<s1.getName() << endl;
	cout << "Student Rollno: "<<s1.getRollno() << endl;
	cout << "Student Class: " << s1.getClass() << endl;
	cout << "Student Specialized in: " << s1.getSpecial() << endl;
	cout << "Subjects enrolled into: " << s1.getSub() << endl;

	//strcat_s(str2, s1.getName());
}