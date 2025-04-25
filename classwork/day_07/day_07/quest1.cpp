#include<iostream>
using namespace std;
int main()
{
	int n,dig;
	int sum = 0, pro = 1;
	cout << "Enter the number: "<<endl;
	cin >> n;
	while(n>0)
	{
		
		dig = n % 10;
		sum = sum + dig;
		if (dig != 0) {
			pro = pro * dig;
		}
		n = n / 10;
	} 

	cout << "Sum: " << sum << endl;
	cout << "Product: " << pro << endl;
	return 0;
}