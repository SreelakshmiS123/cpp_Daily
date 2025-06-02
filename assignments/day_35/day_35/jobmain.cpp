#include<iostream>
#include<thread>
#include<algorithm>
#include<chrono>
#include<vector>
#include<fstream>
#include"Job.h"
#include"Logger.h"
#include"scheduler.h"
using namespace std;
void displayMenu()
{
	cout << "1.Load jobs from file";
	cout << "2.Choose scheduling algorithm";
	cout << "a.FIFO";
	cout << "b.Priority scheduling";
	cout << "3.Execute job";
	cout << "4.Export log";
	cout << "5.Exit";

}
int main()
{
	vector<Job>jobs;
	Logger logger("job_log.txt");
	char choice;
	bool running = true;
	while (running)
	{
		displayMenu();
		cin >> choice;
		switch(choice)
		{
		case'1':
			jobs.clear();
			if (loadjobs("jobs.text", jobs, logger))
			{

			}
	}