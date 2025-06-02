#include<iostream>
#include<string>
#include"employee1.h"
using namespace std;
void employee1::setID(int id)
{
	e_id = id;
}
int employee1::getID()
{
	return e_id;
}
void employee1::setName(string name)
{
	e_name = name;
}
string employee1::getName()
{
	return e_name;
}