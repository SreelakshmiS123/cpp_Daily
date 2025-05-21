#pragma once
class Grade
{
protected:
	char name[30];
	int m1, m2, m3;
	float avg;
public:
	void setname();
	void setm1();
	void setm2();
	void setm3();
	//void getMark();
	void calcAvg();
	void display();
};
