#include<iostream>
#include<fstream>
#include"Logger.h"
using namespace std;

Logger::Logger(const char* filename)
{
	logFile.open(filename);
}
Logger::~Logger()
{
	if (logFile.is_open()) 
	{
		logFile.close();
	}
}
void Logger::log(LogLevel level, const char* message)
{
	const char* levelstr[] = { "[INFO]","[DEBUG]", "[WARNING]", "[ERROR]" };
	if (logFile.is_open())
	{
		logFile << levelstr[level] << " " << message << endl;
	}
}