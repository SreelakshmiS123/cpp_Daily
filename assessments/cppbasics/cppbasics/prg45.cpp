#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	int min = (x < y) ? x : y;
	int max = (x > y) ? x : y;

	cout << "Minimum value: " << min << endl;
			cout<<"Maximum value: "<<max;
}