#include<iostream>
#include"day06.h"
using namespace std;
int noStar()
{
	int n,i,j,count;
	i = 1;
	cout << "Enter n: " << endl;
	cin >> n;
	//count = 1;
	while (i < (n * n))
	{
		if(i%n==0)
		 cout << i<<endl;
		else 
			cout <<i<< "*";
		i++;

	}
	

	/*while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (count % n == 0)
				cout <<count;
			else
				cout << count << "*";
			count++;
			j++;

		}
		cout << endl;
		i++;
	}*/
	return 0;
}