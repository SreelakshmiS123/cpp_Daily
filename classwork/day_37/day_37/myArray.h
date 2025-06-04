#pragma once
template<typename T,size_t  S>
class myArray
{
	T* ptr;//T*- datatype pointer
	int index;
	
public:
	myArray()
	{
		ptr = new T[S];
		index = -1;
	}
	void push_back
};