//Null or nullptr = (void*)0
#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	char ch = 'A';
	float f = 10.5;
	int b = 12;
	//void* ptr = nullptr;
	int* ptr1 = nullptr;

	printf("\nAddress of a=%u and it value= %d\n", &a, a);
	printf("\nAddress of ch=%u and it value= %c\n", &ch, ch);
	printf("\nAddress of f=%u and it value= %f\n", &f, f);

	printf("\nAddress of ptr=%u and it value= %u\n", &ptr1, ptr1);

	a = 10;
	ptr1 = &a;
	printf("\nAddress of ptr1=%u and it value= %u\n", &ptr1, ptr1);

	printf("\nptr1 ispointing to=%u", ptr1);
	printf("\n%u is having a value stored as=%d\n" ,ptr1, *ptr1);//dereferencing a ptr

	
	ptr1 = &b;
	printf("\n%u is having a value stored as=%d\n", ptr1, *ptr1);

	
	*ptr1 = 101;

	printf("\nAddress of b=%u and its value=%d\n", &b, b);

	ptr1 = &ch;
	printf("\nAddress of b=%u and its value=%d\n", &b, b);



}