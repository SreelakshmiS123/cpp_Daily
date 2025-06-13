#include<iostream>
#include<mutex>
#include<thread>
using namespace std;
class Counter
{
	int x;
	mutex mtx;
public:
	Counter():x(0){}

void increment(const string tName)
{
	for (int i = 0;i < 5;i++)
	{
		lock_guard<mutex>lock(mtx);
		//mtx.lock();
		x += 2;

		cout << "\n" << tName << " increment x by " << x << endl;
		//mtx.unlock();
	}
}
};
int main()
{
	Counter c;
	thread t1(&Counter::increment, &c, "Thread 1");
	t1.join();
	thread t2(&Counter::increment, &c, "Thread 2");
	t2.join();

}