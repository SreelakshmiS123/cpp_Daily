#include<iostream>
int menu();
double circle(int);
double triangle(int, int);
int rectangle(int, int);
int square(int);
using namespace std;
int main()
{
	int r,b,h,a,l,b1,ch;

	switch (menu())
	{
	case 1:
		cout << "Enter the radius: ";
		cin >> r;
		cout << "Area of circle is: "<<circle(r);
		break;
	case 2:
		cout << "Enter the value of b and h: ";
		cin >> b >> h;
		cout << "Area of triangle is: " << triangle(b,h);
		break;
	case 3:
		cout << "Enter the values of l and b ";
		cin >> l >> b1;
		cout << "Area of rectangle is: " << rectangle(l,b1);
		break;
	case 4:
		cout << "Enter the values of a ";
		cin >> a ;
		cout << "Area of square is: " << square(a);
		break;

	}
	
	//return 0;
}

double circle(int r)
{
	double areacir = 3.14 * (r * r);
	return areacir;
	//cout << "Area of circle is: " << areacir;
}
double triangle(int b, int h)
{
	double areatri = 1.5*(b * h);
	return areatri;
	//cout << "Area of triangle is: " << areatri;
}
int rectangle(int l, int b1)
{
	int arearec = l*b1;
	return arearec;
	//cout << "Area of rectangle is: " << arearec;
}
int square(int a)
{
	int areasqu = (a * a);
	return areasqu;
	//cout << "Area of rectangle is: " << areasqu;

}
int menu()
{
	//nt r, b, h, a, l, b1, ch;

	int ch;
	cout << "Enter your choice:1 - 4: ";
	cout << "1.circle"<<endl;
	cout << "2.triangle" << endl;
	cout << "3.rectangle" << endl;
	cout << "4.square" << endl;

	cin >> ch;
	return ch;
	}

