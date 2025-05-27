#include<iostream>
using namespace std;
class Test
{
	int emp_id;
public:
	Test()
	{
		this->emp_id = 0;
	}
	Test(int emp_id)
	{
		this->emp_id = emp_id;
	}
	void setV(int emp_id)
	{
		this->emp_id = emp_id;
	}
	int getV()
	{
		return this->emp_id;
	}
};

int main()
{
	Test t;
	t.setV(12);
	cout<<t.getV();
	Test t1(10);
	t1.setV(13);
}