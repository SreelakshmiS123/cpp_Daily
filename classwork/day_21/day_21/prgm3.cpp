//sum of array elements using pointers
#include<iostream>
using namespace std;

int sumArr(int*, int);//int for no.of elements
int main()
{
	int list[] = { 1,2,3,4,5 };
	int cap = sizeof(list) / sizeof(list[0]);
	cout << sumArr(&list[0]/*list*/, cap) << endl;
}
int sumArr(int* ptr, int n)
{
	int sum = 0;
	/*for (int i = 0;i < n;i++)
	{
		sum = sum + ptr[i];//pointer converted to a array notation
	}
	*/

	for (int i = 0;i < n;i++,ptr++)//ptr++ is to change the BA
	{
		sum += *ptr;
	}
	return sum;
}