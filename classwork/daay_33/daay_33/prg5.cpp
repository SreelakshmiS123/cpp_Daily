#include<iostream>
using namespace std;
template<class T1, class T2>
class Calculator
{
	T1 data1;
	T2 data2;
public:
	Calculator(T1 v1, T2 v2) :data1(v1), data2(v2) {
		cout << "My Calculator"<<endl;

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
		if (data2 == 0)
		{
			cout << "Division by 0 is not possible";
		}
		else
		{
			cout << data1 << "/" << data2 << " is " << (data1 / data2) << endl;
		}

	}
};
int main()
{
	Calculator<int,float >c(20, 1.4);
	c.addition();
	c.subtraction();
	c.product();
	c.division();

}