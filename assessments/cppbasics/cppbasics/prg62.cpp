//Categorize Temperature into Hot, Warm, Cold
#include<iostream>
using namespace std;
int main()
{
	int temp;
	cin >> temp;
	if (temp > 35)
		cout << "Hot";
	else if (temp > 20 && temp < 35)
		cout << "Warm";
	else if (temp < 25)
		cout << "Cold";
}