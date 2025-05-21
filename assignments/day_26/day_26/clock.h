#pragma once
#pragma once
class Clock
{
protected:
	int hour, minute, second;
public:
	void nextHour();
	void nextMinute();
	void nextSecond();
	void start();
	void display();
};
