//Find the Middle Value Among Three Numbers
#include<iostream>
int midVal(int, int, int);
using namespace std;
int main()
{
	int a, b, c;
	cout << "Enter the values of a,b,c: " << endl;
	cin >> a >> b >> c;
	int res = midVal(a, b, c);
	cout << "The middle number is: " << res;

}
int midVal(int a, int b, int c)
{
	if ((a > b) && (a < c) || (a < b) && (a > c))
		return a;
	else if ((b > a) && (b < c) || (b < a) && (b > c))
		return b;
	else
		return c;
}