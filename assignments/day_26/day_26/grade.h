#pragma once
#pragma once
class Grade
{
protected:
	char name[30];
	int m1, m2, m3;
	float avg;
public:
	void setname();
	void setm1(int);
	void setm2(int);
	void setm3(int);
	//void getMark();
	void calcAvg();
	void display();
};

