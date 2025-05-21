#ifndef __STUDENT__

#endif __STUDENT__

class Student
{
private:
	int rollno;
	char name[20];
	float marks[4];
public:
	void setName(char*);
	char* getName();
	void setRollno(int);
	int getRollno();
	void setMArks(float[]);
	void display();
private:
	float calcAvg();
};
