//Write a program to calculate Simple Interest and Compound Interest.

#include<stdio.h>
#include<math.h>

void main(){
	
	float pa,ri,tp,si,ci;
	
	printf("Enter a principal amount\n");
	scanf("%f",&pa);
	printf("Enter rate of interest\n");
	scanf("%f",&ri);
	printf("Enter time period\n");
	scanf("%f",&tp);
	
	si = pa*ri*tp/100;
	ci = pa*pow(1+ri/100,tp)-pa;
	
	printf("Simple interest: %0.2f\n",si);
	printf("Compound interest: %0.2f",ci);
	
	
}
