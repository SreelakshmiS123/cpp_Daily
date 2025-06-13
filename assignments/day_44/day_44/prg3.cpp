#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex m;
void counterValue(int& a)
{
	for (int i = 0;i < 1000;i++)
	{
		m.lock();
		a += 1;
		m.unlock();
    }
	cout << "Counter value: " <<a<< endl;
}
int main()
{
	int a = 0;
	thread t1(counterValue, ref(a));
	t1.join();
	thread t2(counterValue,ref( a));
	t2.join();
}