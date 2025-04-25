#include<iostream>
using namespace std;
int main()
{
	int start;
	int end;
	cout << "Enter start and end:" << endl;
	cin >> start >> end;
	int res = 1;
	for (int i = 1;i <= 10;i++)
	{
		for (int j = start;j <= end;j++)
		{
			res = i * j;
			cout << i << "*" << j << "=" << res <<"\t";
			//cout << "\t";
		}
		cout <<"\n" ;
	}
	return 0;
}