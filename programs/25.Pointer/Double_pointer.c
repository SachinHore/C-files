#include<stdio.h>
int main()
{
	int num=123,*ptr,**ptr1;
	ptr=&num;
	ptr1=&ptr;
	printf("%d\n",&num);
	printf("%d\n",ptr);
	printf("%d\n",ptr1);
	printf("%d\n",**ptr1);
	printf("%d\n",&num);
}
