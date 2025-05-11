//find even no.s between a start range and end range
#include<iostream>
using namespace std;
int main()
{
	int start, end;
	cin >> start >> end;
	for (int i = start;i <= end;i++)
	{
		if (i % 2 == 0)
		{
			cout << "Even no.s are:"<<i<<endl;
         }
		
		
	}
	return 0;
}