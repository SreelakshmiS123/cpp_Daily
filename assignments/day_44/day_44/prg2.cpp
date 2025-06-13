#include<iostream>
#include<thread>
using namespace std;

void oddEven(int n,bool flag)
{
	for (int i = 1;i <= n;i++)
	{
		if (flag == 1 && i % 2 == 0)
		{
			cout << "Even number: " << i << endl;
		}
		else if (flag == 0 && flag % 2 == 1)
		{
			cout << "Odd number: " << i << endl;
		}
	}
}
int main()
{
	thread t1(oddEven, 10, 1);
	thread t2(oddEven, 10, 0);

	t1.join();
	t2.join();
}