#include<stdio.h>
#pragma pack(1) //structure padding

struct student
{
	int num;
	double d;
}s1;

int main()
{
	printf("%d\n",&s1);
	printf("%d\n",&s1+1);
	printf("%d",sizeof(s1));
}
