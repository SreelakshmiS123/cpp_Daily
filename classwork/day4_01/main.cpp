#include<iostream>
#include"stringHand.h"
#include"noElse.h"
#include"enumHand.h"
using namespace std;
int main(int argc,char *argv[])
{
	int add = 0;
	int sub = 0;
	//noElsehandling();
	ifElsehandle();
	//stringHandling();
	//enumHandling();
	/*
	cout << argc << endl;
	cout <<"argv[0]: "<< argv[0] << endl;
	cout << "argv[1]: " << argv[1] << endl;
	cout << "argv[2]: " << argv[2] << endl;
	cout << "argv[3]: " << argv[3] << endl;
	*/
	/*for (int i = 0;i < argc;i++) {
		cout << "argv[" << i << "]: "<<argv[i] << endl;
	}
	int res = atoi(argv[1]) + atoi(argv[2]);
	cout << "res: " << res << endl;
	*/
	switch (argv[1][0]) {
	case '+':
		 add = atoi(argv[1]) + atoi(argv[2]);
		cout << "res: " << add << endl;
		break;
	case '-':
		 sub = atoi(argv[1]) - atoi(argv[2]);
		cout << "res: " << sub << endl;
		break;
	}
	
	return 0;
}