#include<iostream>
#include "clock.h"
using namespace std;
void Clock::start()
{
	second = 0;
	minute = 0;
	hour = 0;
}
void Clock::nextSecond()
{
	second++;
	if (second == 60)
	{
		nextMinute();
		second = 0;
	}
}
void Clock:: nextMinute()
{
	minute++;
		if (minute == 60)
		{
			nextHour();
			minute = 0;
		}
}
void Clock::nextHour()
{
	hour++;
}
void Clock::display()
{
	cout <<"Hour: "<< hour<<endl;
	cout << "Minute:" << minute<<endl;
	cout << "Second: " << second<<endl;
}