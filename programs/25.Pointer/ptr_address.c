#include<stdio.h>
int main()
{
	int a=50,*ptr;
	ptr=&a;
	printf("\nAddress of a is:%d",ptr);
	printf("\naddress of next increment is: %d",ptr+0);
	printf("\naddress of next increment is: %d",ptr+1);
	
	printf("\naddress of next increment is: %d",ptr+2);
	printf("\naddress of next increment is: %d",ptr-1);
	printf("\naddress of next increment is: %d",&ptr[0]);//(ptr+i)
	printf("\naddress of next increment is: %d",ptr[0]);
}
