/*
Write a program to calculate area of a triangle. Take three sides (a, b, c) of triangle from user. 
Use Heron’s Formula: 
Area = ? {s*(s-a)*(s-b)*(s-c)}
where s = (a+b+c)/2


*/

#include<stdio.h>
#include<math.h>

void main(){
	float a,b,c,s;
	
	printf("Enter side 1 of triangle:\n");
	scanf("%f",&a);
	printf("Enter side 2 of triangle:\n");
	scanf("%f",&b);
	printf("Enter side 3 of triangle:\n");
	scanf("%f",&c);
	
	s = (a+b+c)/2.0;
	
	printf("Area of triangle : %0.2f sq.units",pow((s*(s-a)*(s-b)*(s-c)),0.5));
	
	
}
