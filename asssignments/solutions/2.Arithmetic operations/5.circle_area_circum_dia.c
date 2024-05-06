//Write a program to calculate area, circumference, and diameter of a circle. Take radius from user. (Use float values).

#include<stdio.h>

void main(){
	float pi = 22.0/7.0,r;
	printf("Enter radius of circle:\n");
	scanf("%f",&r);

	
	printf("Area of circle: %f\n",2*pi*r*r);
	printf("Circumference of circle: %f\n",2*pi*r);
	printf("Diameter of circle: %f\n",2*r);
	
}
