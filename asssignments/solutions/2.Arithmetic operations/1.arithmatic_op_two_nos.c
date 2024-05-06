//Write a program to perform arithmetic operations on two integer and float numbers entered by user. Print product of float numbers upto two decimal places. 

#include<stdio.h>
void main(){
	int a,b;
	float c,d;
	printf("Enter two int numbers\n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	
	printf("Enter two float numbers\n");
	scanf("%f",&c);
	scanf("%f",&d);
	
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %d\n",a,b,a/b);
	
	printf("%f + %f = %f\n",c,d,c+d);
	printf("%f - %f = %f\n",c,d,c-d);
	printf("%f * %f = %0.2f\n",c,d,c*d);
	printf("%f / %f = %f\n",c,d,c/d);
	
}
