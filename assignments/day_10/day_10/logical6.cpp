#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;

	while (n> 0)
	{
		cout << "Count down: " << n<<endl;
		n = n--;
	}

}