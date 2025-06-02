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

bool loadjobs(const char* filename, vector<Job>& jobs, Logger& logger)
{
	ifstream infile(filename);
	if (!infile)
	{
		logger.log(ERROR, "Failed to oprn job input file");
		return false;
	}
	int id, time, priority;
	while (infile >> id >> time >> priority)
	{
		jobs.push_back(Job(id, time, priority));
	}
	logger.log(INFO, "Jobs added successfully");
	infile.close();
	return true;
}
void sortByid(vector<Job>& jobs)
{
	sort(jobs.begin(), jobs.end(), [](const Job& a, const Job& b)
		{
			return a.jobID < b.jobID;
		});
}
void sortBypriority(vector<Job>& jobs)
{
	sort(jobs.begin(), jobs.end(), [](const Job& a, const Job& b)
		{
			return a.jobID > b.jobID;
		});
}
void executeJobs(vector<Job>& jobs, Logger& logger)
{
	auto start = chrono::system_clock::now();
	for (const auto& job : jobs)
	{
		char buffer[100];
		snprintf(buffer, sizeof(buffer), "Executing job ID:%d|Priority:%d", job.jobID, job.priority);
		logger.log(DEBUG, buffer);
		this_thread::sleep_for(milliseconds(job.executionTime));
	}
	auto end = chrono::system_clock::now();
	auto duration = dynamic_cast<millisecond>(end - start);

	char summary[100];
	snprintf(summary, sizeof(summary), "All jobs executed", duration.count());
	logger.log(INFO, summary);

}