//reverse an array using pointers
#include<iostream>
using namespace std;
int reverseArr(int*, int);
int main()
{
	int list[] = { 1,2,3,4,5 };
	int cap = sizeof(list) / sizeof(list[0]);
	reverseArr(list, cap);
	 for (int i = 0;i < cap;i++)
	 {
		 cout <<list[i];
	 }
}
int reverseArr(int* ptr, int n)
{
	int t;
	int* start = nullptr;
	int* end = nullptr;

	start = ptr;
	end = ptr + (n - 1);

	while (start <= end)
	{
		t =*start;
		*start =* end;
		*end = t;
		start++;
		end--;
	}
	return 0;
	/*for (int i = 0;i < n / 2;i++)
	{
		t = ptr[i];
		ptr[i] = ptr[n - i - 1];
		ptr[n-i-1] = t;
	}
	return 0;
	*/
}