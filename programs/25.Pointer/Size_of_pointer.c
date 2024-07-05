#include<stdio.h>
int main()
{
	int a=10,*ptr;
	char ch1='A',*ch;
	float f=12.34,*f1;
	double d1=1234.5,*d;
	ptr=&a;
	ch=&ch1;
	f1=&f;
	d=&d1;
	
	printf("\n size of int pointer: %d",sizeof(ptr));
	printf("\n size of int pointer: %d",sizeof(ch));
	printf("\n size of int pointer: %d",sizeof(f1));
	printf("\n size of int pointer: %d",sizeof(d));
	
	printf("\n size of int pointer: %d",sizeof(*ptr));
	printf("\n size of int pointer: %d",sizeof(*ch));
	printf("\n size of int pointer: %d",sizeof(*f1));
	printf("\n size of int pointer: %d",sizeof(*d));
		
	
}
