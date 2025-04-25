#include<iostream>
#include"assgmt.h"
using namespace std;
int q2()
{
	int n, i;
	i = 1;
	cout << "Enter n: " << endl;
	cin >> n;
	//count = 1;
	while (i < (n * n))
	{
		if (i % n == 0)
			cout << i << endl;
		else
			cout << i << "*";
		i++;

	}
	return 0;
}