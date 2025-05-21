#include<iostream>
#include "Student.h"
using namespace std;
int main()
{
	Student s;
	float marks[] = { 55,56,70,88 };
	s.setName("Lekshmi");
	s.setRollno(101);
	s.setMArks(marks);

	s.diaplay();

}