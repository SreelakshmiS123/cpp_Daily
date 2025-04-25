#include<iostream>
#include"assg.h"
using namespace std;
int assg_5()
{
	int m1, m2, m3, m4, m5;
	int aggr = 0;
	float perc = 0;
	cout << "Enter the marks obtained by students: " << endl;
	cin >> m1 >> m2 >> m3 >> m4 >> m5;
	aggr = m1 + m2 + m3 + m4 + m5;
	perc = aggr/5;
	cout << "Obtained aggregate mark is: " << aggr<<endl;
	cout << "Obtained percentage mark is: " << perc<<"%";

	return 0;
}