#include<iostream>
using namespace std;
int main()
{
	int n = 6,countways=0;
	for (int i = 1;i < n;i++) {
		for (int j = i;j < n;j++) {
			for (int k = j;k<n;k++) {
				for (int l = k;l < n;l++) {
					if ((i + j + k + l == n)) {
						cout << i << "+" << j << "+" << k << "+" << l << "=" << n << endl;
						countways++;
					}
				}
			}
		}
	}
	if (countways == 0) 
		cout << "No.of ways=-1" << endl;
	else
		cout << "No.of ways are: " << countways;
	
	return 0;
}