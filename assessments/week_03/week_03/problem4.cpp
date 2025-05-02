// first equilibrium index (0-based indexing).
#include<iostream>
#define MAX 30
using namespace std;
int main()
{
	int n,arr[MAX],sum=0,leftsum=0;
	cout << "Enter the size of the array: ";
	cin >> n;

	cout << "Enter the elements of the array: ";
	for (int i = 0;i < n;i++)
		cin >> arr[i];

	for (int i = 0;i < n;i++)
		sum += arr[i];

	for (int i = 0;i < n;i++)
	{
		int rightsum = sum - leftsum - arr[i];

		 if (leftsum == rightsum)
		 {
			 cout << i << endl;
			 return 0;
		 }
		 leftsum = leftsum + arr[i];
	}
	cout <<"Equilibrium index: " - 1 << endl;
}

/*
Enter the size of the array: 4
Enter the elements of the array: 
1 2 3 4
Equilibrium index: -1
*/