#include<iostream>
using namespace std;
template<class T1, class T2>
class Calculator
{
	T1 data1;
	T2 data2;
public:
	Calculator(T1 v1, T2 v2) :data1(v1), data2(v2) {
		cout << "Welcome to Sreelakshmi'S Calculator"<<endl;

	}
	void addition()
	{
		cout <<data1<<"+"<<data2<<" is "<< (data1+data2) << endl;

	}
	void subtraction()
	{
		cout << data1 << "-" << data2 << " is " << (data1 - data2) << endl;

	}
	void product()
	{
		cout << data1 << "*" << data2 << " is " << (data1 * data2) << endl;

	}
	void division()
	{
		cout << data1 << "/" << data2 << " is " << (data1 / data2) << endl;

	}
};
int main()
{
	Calculator<int, int >intBox(20, 10);
	intBox.addition();
	intBox.subtraction();
	intBox.product();
	intBox.division();

}