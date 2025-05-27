#include<iostream>
using namespace std;
class A
{
private:
	int x;
protected:
	int y;
	void proMethod()
	{
		cout << "method in protected of A";
	}
public:
	A()
	{
		cout << "A constructer got called"<<endl;
		x = 10;
		y = 20;
	}
	void dispA()
	{
		cout << "\tHello from A" << endl;
		cout << "X= " << x << "\ty= " << y << endl;
	}
};

class B :public A//derived class
{
private:
	int a;
protected:
	int b;
public:
	B()
	{
		cout << "B constructer got called"<<endl;
		a = 11;
		b = 22;
	}
	void dispB()
	{
		cout << "\tHello from B" << endl;
		cout << "a= " << a << "\tb= " << b << endl;
	}
	void protectB()
	{
		//proMethod();
		y = 10;
	}
};
int main()
{
	A objA;//prints A constructer got called
	B objB;
	
	objA.dispA();
	objB.dispB();
	objB.dispA();

	//objB.proMethod();//compile error.

	objB.protectB();
}