#include<iostream>
#include"enumHand.h"
using namespace std;



void enumHandling() {
	enum Day { Monday=1000, Tuesday, Wednesday=2000,Thursday,Friday,Sturday,Sunday };
	Day today = Friday;
	cout << "Value of Today: " << today << endl;
}