#include<iostream>
#include"day06.h"
using namespace std;
int main()
{
	noStar();
	int n,i;
	i = 1;
	cin >> n;

	while (i < n)
	{
		cout << (i*i)-1 <<",";
		i++;
	}
	cout << (i * i) - 1;
	return 0;
}