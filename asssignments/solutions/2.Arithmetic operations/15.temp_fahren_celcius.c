//Write a program to convert temperature in Fahrenheit to Celsius.

#include<stdio.h>

void main(){
	
	float temp;
	
	printf("Enter temperature in Fahrenheit: \n");
	scanf("%f",&temp);
	
	printf("%0.2f Fahrenheit = %0.2f Celsius",temp,(temp-32)*(5.0/9.0));
	
}
