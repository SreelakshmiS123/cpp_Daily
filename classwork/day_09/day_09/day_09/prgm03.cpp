#include<cstdio>
int main()
{
	int a = 10;
	float b = 15.5;
	char c = 'A';
	double d = 101.111;
	char s[20];

	printf("\n %c \n %d \n %f \n %s \n", c, a, b, d, "Lakshmi");
	scanf("%c%d%f%lf%s", &c, &a, &b, &d, s);
	printf("\n %c \n %d \n %f \n %s \n", c, a, b, d,s);


	return 0;
}