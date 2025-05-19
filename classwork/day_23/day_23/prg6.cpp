#include<iostream>
using namespace std;

typedef struct employeeDetails
{
	int empid;
	string empname;
	int empph;


}EMP;
typedef struct period
{
	int empid;
	int days;
}PER;
typedef struct salary
{
	int empid;
	int bpay;
	int varpay;
	int allowance;
}SAL;
void getDetails(EMP e, PER p,SAL s)
{
	cout << "Enter employee ID" << endl;
	cin >> e.empid;
	cout << "Enter employee name" << endl;
	cin >> e.empname;
	cout << "Enter employee phone" << endl;
	cin >> e.empph;
	p.empid = e.empid;
	cout << "Enter days worked: " << endl;
	cin >> p.days;
	s.empid = e.empid;
	cout << "Enter employee basic pay " << endl;
	cin >> s.bpay;
	cout << "Enter employee variable pay " << endl;
	cin >> s.varpay;
	cout << "Enter employee allowance" << endl;
	cin >> s.allowance;
}
/*void displayEmp(EMP e, PER p, SAL s)
{
	cout<<"Employee name "<<"\t" << "Employee ID " << "\t" << " " << "\t" << "Employee name " << "\t"
}*/
int salCalculation(SAL s)
{
	int gross = s.bpay + s.varpay + s.allowance;
	return gross;

}
//int taxCalculation
int main()
{
	EMP e;
	PER p;
	SAL s;
	getDetails(e, p, s);
	cout<<"Gross pay is: "<<salCalculation(s);
	return 0;
}