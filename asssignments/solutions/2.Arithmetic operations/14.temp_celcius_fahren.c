//Write a program to convert temperature in Celsius to Fahrenheit. [C=(5/9) (F-32)]

#include<stdio.h>

void main(){
	
	float temp;
	
	printf("Enter temperature in celcius: \n");
	scanf("%f",&temp);
	
	printf("%0.2f celcius = %0.2f Fahrenheit",temp,(temp*(9.0/5.0))+32);
	
}
