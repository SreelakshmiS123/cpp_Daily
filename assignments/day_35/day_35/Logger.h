#pragma once
#include<iostream>
#include<fstream>
using namespace std;
enum LogLevel{INFO,DEBUG,WARNING,ERROR};
class Logger
{
	ofstream logFile;
public:
	Logger(const char* filename);
	~Logger();
	void log(LogLevel level, const char* message);
};