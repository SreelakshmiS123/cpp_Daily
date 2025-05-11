#include<iostream>
#define MAX 5
using namespace std;
int main()
{
	int a[MAX], b[MAX];
	for (int i = 0;i < MAX;i++)
		cin >> a[i];
	int j = 0;
	for (int i = MAX - 1;i >= 0;i--)
	{
		b[j] = a[i];
		j++;
	}
	
	//for (int i = 0;i < MAX;i++)
//cout << b[i]<<endl;
	bool flag = true;
	for (int i = 0;i < MAX;i++)
	{
		if (a[i] != b[i])
		{
			//cout << "Is a palin array"<<endl;
			flag = false;
			break;

		}
	}
	if (flag == true)
		cout << "Is a palin array";
	else
		cout << "Not a palin array";
}