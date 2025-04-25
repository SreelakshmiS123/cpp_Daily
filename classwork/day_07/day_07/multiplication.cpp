#include<iostream>
using namespace std;
int main()
{
	int start;
	int end ;
	cout << "Enter start and end:" << endl;
	cin >> start >> end;
	int res = 1;
	for (int i = start;i <= end;i++)
	{
		for (int j = 1;j <=10 ;j++) 
		{
			res = i * j;
			cout << i<< "*" << j << "=" << res << endl;;
		}
		cout << "================="<<endl;
	}
	return 0;
}