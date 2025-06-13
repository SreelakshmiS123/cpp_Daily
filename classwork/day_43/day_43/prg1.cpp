#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
	std::istream_iterator<int> inIt(std::cin);//begin of input stream
	std::istream_iterator<int> endIt;//end of iput stream

	std::vector<int>number(inIt, endIt);//return until EOF(ctrl+Z)

	vector<int>num = { 1,2,3 };
//	num.push_back(4);
/*
	for (int n : number)
	{
		std::cout << n << " ";
	}*/
	

	std::ostream_iterator<int>outIt(std::cout, " ");//output with a space 
	std::copy(number.begin(), number.end(), outIt);
	
	return 0;
}