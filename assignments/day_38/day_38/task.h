#pragma once
#include<iostream>
#include<string>
using namespace std;
class Task
{
	string name;
public:
	Task(string n) :name(n) {}
	void setName(string n)
	{
		name = n;
	}
	string getName()
	{
		return name;
	}
	bool addTask(list<Task> t);
	bool urgentRemove(list<Task> t);
	bool removeTask(list<Task> t);
	void display(list<Task> t);
};