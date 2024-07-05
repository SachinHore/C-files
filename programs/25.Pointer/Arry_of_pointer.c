#include<stdio.h>
int main()
{
	int num1=10,num2=20,num3=30;
	int *p[3]={&num1,&num2,&num3};
	printf("%d\n\n",&num1);
	printf("%d\n",p[0]);
	printf("%d\n",p[1]);
	printf("%d\n",p[2]);
	printf("%d\n",*p[0]);
	printf("%d\n",*p[1]);
	printf("%d\n",*p[2]);
	
	printf("%d\n",**p);
	printf("%d\n",**(p+1));
	
}
