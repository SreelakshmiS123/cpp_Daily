#pragma once
#include"task.h"
#include<list>
class taskManager
{
	list<Task> t;
public:
	bool addTask(string n);//push to the end
	bool urgentAdd(string n);//push to the front
	bool removeTask(string n);
	void display();
};