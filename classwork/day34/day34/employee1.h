#pragma once
#include<iostream>
#include<string>
using namespace std;
class employee1
{
protected:
	int e_id;
	char e_name[20];
public:
	employee1(int id,char name[]) :e_id(id), e_name(strcpy(name[])) {}
	void setID(int);
	int getID();
	void setName(string);
	string getName();
};
class Finance:public employee1
{
protected:
	int baseSal;
	int varPay;
	int pf;
public:
	Finance(int id,string name,int bs, int vp, int p) :employee1(e_id,e_name),baseSal(bs),varPay(vp),pf(p){}
	void setBasesal(int);
	int getBasesal();
	void setVarpay(int);
	int getVarpay();
	void setPf(int);
	int getPf();
};
