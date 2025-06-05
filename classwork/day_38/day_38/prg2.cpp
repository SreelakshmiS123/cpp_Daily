#include<iostream>
#include<list>
using namespace std;
class student
{
	int s_id;
	string name;
public:
	student():s_id(0), name(""){}
	student(int id,string n):s_id(id),name(n){}
	int getID()
	{ return s_id; }
	void setId(int id)
	{
		s_id = id;
	}
	void setName(string n)
	{
		name = n;
	}
	string getName()
	{
		return name;
	}
	void display()
	{
		cout << "ID: " << name << "| Name: " << name << endl;
	}
	bool operator==(const student& other)const
	{
		return s_id == other.s_id;

	}
	bool operator<(const student& other)const
	{
		return this->name.compare(other.name) < 0;

	}
};
void studentSort(list<student>& s)
{
	student t;
	for (auto &i : s)
	{
		for (auto &j : s)
		{
			if (i < j)
			{
				t = i;
				i = j;
				j = t;
			}
		}
	}
}
int main()
{
	student s1(101, "abc1");
	student s2(102, "abc2");
	student s3(103, "abc3");
	student s4(104, "abc4");

	student s5(105, "abc5");
	student s6(106, "abc6");
	student s7(107, "abc7");


	std::list<student> listStuds;

	listStuds.push_front(s6);
	listStuds.push_back(s7);
	listStuds.emplace_front(s3);
	listStuds.emplace_back(s4);
	listStuds.push_front(s1);
	listStuds.push_back(s2);
	listStuds.insert(listStuds.begin(), s5);
	for (auto lS : listStuds)
		lS.display();
	cout << "============================" << endl;
	studentSort(listStuds);
	for (auto lS : listStuds)
		lS.display();
	/*listStuds.reverse();
	cout << "============================" << endl;
	for (auto lS : listStuds)
		lS.display();

	listStuds.remove(s2);
	cout << "============================" << endl;
	for (auto lS : listStuds)
		lS.display();*/



	cout << endl;
	return 0;
}