//?	Write a program to swap values of two variables without using third variable.


#include<stdio.h>

void main(){
	
	int a = 20;
	int b = 10;
	
	
	printf("a = %d ",a );
	printf("b = %d",b );
	
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\na = %d ",a );
	printf("b = %d",b );

}
