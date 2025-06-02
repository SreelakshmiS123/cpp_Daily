#pragma once
#include<iostream>
#include<vector>
#include"Job.h"
#include"Logger.h"
using namespace std;
bool loadjobs(const char* filename, vector<Job>& jobs, Logger& logger);
void sortByid(vector<Job>& jobs);
void sortBypriority(vector<Job>& jobs);
void executeJobs(vector<Job>& jobs, Logger& logger);
