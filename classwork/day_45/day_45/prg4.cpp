#include<iostream>
#include<thread>
#include<mutex>
#include<string>
#include<queue>
#include<fstream>
#include<sstream>
using namespace std;
mutex mtx;
mutex mtx1;
class Task
{
	string id;
	int load;
public:
	Task(string id,int load):id(id),load(load){}

	string getID()
	{
		return id;
	}

	int getLoad()
	{
		return load;
	}
};
class loadTask
{
	queue<Task> taskQue;
	int cpu;
public:
	void setCpu(int cpu)
	{
		this->cpu = cpu;
	}
	int getCpu()
	{
		return cpu;
	}
	void loadFromfile(string filename)
	{
		ifstream file(filename);
		string line;
		
		if (!file.is_open())
		{
			cerr << "Error opening file!" << endl;
			
		}
		getline(file, line);
		if (line.find("CPUs:") != string::npos)
		{
			cpu = stoi(line.substr(line.find(":") + 1));
		}
		while (getline(file, line))
		{
			stringstream ss(line);
			string taskId, temp;
			int load;

			getline(ss, taskId, ':');
			ss >> temp >> load;      

			Task task(taskId, load);
			taskQue.push(task);
		}

		file.close();
	}
	bool getTask(Task& task) 
	{
		lock_guard<mutex> lock(mtx);
		if (!taskQue.empty()) 
		{
			task = taskQue.front();
			taskQue.pop();
			return true;
		}
		return false;
	}
};
void cpuWorker(int cpuId, loadTask& taskQue) {
	
	Task task("", 0);
	while (taskQue.getTask(task)) {
		{
			lock_guard<mutex>lock(mtx1);
			cout << "CPU-" << cpuId << " picked Task " << task.getID()
				<< " (Load: " << task.getLoad() << ")" << endl;
		}
		// Simulate processing
		this_thread::sleep_for(chrono::seconds(task.getLoad()));
		{
			lock_guard<mutex> lock(mtx1);
			cout << "CPU-" << cpuId << " finished Task " << task.getID() << endl;
		}
	}
}
int main() {
	loadTask taskQue;
	taskQue.loadFromfile("input.txt");

	vector<thread> threads;

	// Launch threads representing CPUs
	for (int i = 1; i <= taskQue.getCpu(); ++i) {
		threads.emplace_back(cpuWorker, i, ref(taskQue));
	}

	// Join all threads
	for (auto& t : threads) {
		t.join();
	}

	lock_guard<mutex>lock(mtx);
	cout << "All tasks completed." << endl;
	return 0;
}