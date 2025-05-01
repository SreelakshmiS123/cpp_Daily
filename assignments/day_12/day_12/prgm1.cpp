#include<iostream>
using namespace std;
int main()
{
	int n, sum;
	cout << "Enter the number of elements in the array";
	cin >> n;
	int arr[100];
	cout << "Enter " << n << "non-negetive integers" << endl;
	for (int i = 0;i < n;i++)
	{
		cin >> arr[i];
	}
	cout << "Enter the sum: ";
	cin >> sum;
	bool found = false;
	for (int start = 0;start < n;start++)
	{
		int curSum = 0;
		for (int end = start = 0;end < n;end++)
		{
			curSum += arr[end];
			if (curSum == sum)
			{
				cout << "Sum found between indexes" << start << "and" << end << endl;
				found = true;
				break;
			}
		}
		if (found)
			break;
	}
	if (!found) {
		cout << "No subarray found" << endl;
	}
	return 0;
}