#include<iostream>
#include"Job.h"
using namespace std;
void Job::setJobid(int id)
{
	jobID = id;
}
int Job::getJobid()
{
	return jobID;
}
void Job::setExecutiontime(int et)
{
	executionTime = et;
}
int Job::getExecutiontime()
{
	return executionTime;
}
void Job::setPriority(int p)
{
	priority = p;
}
int Job::getJobid()
{
	return priority;
}