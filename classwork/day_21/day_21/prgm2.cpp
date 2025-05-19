//find max of 2 numbers using ponters
#include<iostream>
using namespace std;
int max2Nos(int*, int*);
int max2Nos(int* x, int* y)
{
	int retValue = 0;
/*
	if (*x < *y)
		retValue = *y;
	else
		retValue = *x;
*/

/*	retValue = (*x > *y) ? (*x) : (*y);
	return retValue;
*/
	return((*x > *y) ? (*x) : (*y));
}
int main()
{
	int v1 = 20, v2 = 10;
	cout << max2Nos(&v1, &v2);
}