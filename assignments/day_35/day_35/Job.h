#pragma once
#include<iostream>
using namespace std;
class Job {
public:
    int jobID;
    int executionTime;
    int priority;

    Job(int id,int et,int p):jobID(id),executionTime(et),priority(p){}
/*
    void setJobid(int);
    int getJobid();
    void setExecutiontime(int);
    int getExecutiontime();
    void setPriority(int);
    int getPriority();
    */
};