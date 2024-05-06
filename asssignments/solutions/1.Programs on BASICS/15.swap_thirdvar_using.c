//?	Write a program to swap values of two variables using third variable.

#include<stdio.h>

void main(){
	
	int a = 10;
	int b = 20;
	int  c;
	
	printf("a = %d ",a );
	printf("b = %d",b );
	
	c=a;
	a=b;
	b=c;
	
	printf("\na = %d ",a );
	printf("b = %d",b );

}
