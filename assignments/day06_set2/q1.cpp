#include<iostream>
#include"assgmt.h"
using namespace std;
int q1()
{
	int n, i;
	i = 1;
	cin >> n;

	while (i < n)
	{
		cout << (i * i) - 1 << ",";
		i++;
	}
	cout << (i * i) - 1;
	return 0;
}