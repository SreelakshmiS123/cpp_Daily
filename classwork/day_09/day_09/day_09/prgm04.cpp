#include<iostream>
#include<cstdio>
//using namespace std;
int main()
{
	int id_01, id_02, id_03, id4, id5;
	char sName_01[20], sName_02[20], sName_03[20], sName_04[20], sName_05[20];
	float m1_1, m1_2, m1_3, m1_4,m1_5;
	float m2_1, m2_2, m2_3, m2_4, m2_5;
	float m3_1, m3_2, m3_3, m3_4, m3_5;
	float m4_1, m4_2, m4_3, m4_4, m4_5;
	float m5_1, m5_2, m5_3, m5_4, m5_5;
    float avg_01, avg_02, avg_03, avg_04, avg_05,
	//printf("Enter the id of first");

	scanf("%d%f%f%f%f%f", &id_01,&m1_1,&m2_1,&m3_1,&m4_1,m5_1);
	avg_01 = (m1_1 + m2_1, m3_1, m4_1, m5_1) / 5;
	
	slno = 1;
	for (int i = 0;i < 30;i++)
		printf("=");
	printf("\n");
	printf("slno|id|name");
	for (int i = 0;i < 30;i++)
		printf("=");
	printf("\n%03d|%03\t|", slno++);
}