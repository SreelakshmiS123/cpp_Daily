#include<iostream>
#include"noElse.h"
using namespace std;
typedef struct users {
	int _id;
	int userType;
	string userName;
}USERS;
void displayMenuNU();
void displayMenuAU();
int ifElsehandle() {
	USERS u;
	cout << "Enter id";
	cin >> u._id;
	cout << "Enter userType(0/1)";
	cin >> u.userType;
	cout << "Enter user name: ";
	cin >> u.userName;

	if (u.userType == 0) {
		displayMenuAU();
	}
	else {
		displayMenuNU(u.userName);
	}
	void displayMenuNU() {

}
	void displayMenuAU() {

	}
}