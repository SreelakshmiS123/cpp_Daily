#include<iostream>
using namespace std;
int main()
{
	int n,c;
	cin >> n;
	int a = 0, b = 1,count=0;
	for (int i = 1;i <= n;i++)
	{
		if (n == 1)
		{
			cout << a;
			continue;
		}
		if (n == 2)
		{
			cout << b;
			continue;
		}
		

			c = a + b;
			a = b;
			b = c;
			cout << c<<" ";

		
	}
	
}