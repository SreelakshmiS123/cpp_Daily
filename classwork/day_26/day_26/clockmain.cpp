#include<iostream>
#include "clock.h"
using namespace std;
int main()
{
	Clock c;
	c.start();
	for (int i = 0;i <= 7200;i++)
	{
		c.display();
		c.nextSecond();
		cout << endl;
	}

}
