#include<iostream>
#include<thread>

using namespace std;

void greet()
{
	cout << "Hello world"<<endl;
}
int main()
{
	thread t1(greet);
	t1.join();

	cout << "End of the program" << endl;
	//t1.join();  exception will occur, the hread is already lost.
	return 0;
}