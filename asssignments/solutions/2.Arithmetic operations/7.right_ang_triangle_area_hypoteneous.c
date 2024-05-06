//If base and height of a right-angled triangle are input through keyboard. Write a program to calculate hypotenuse and area of a right-angled triangle. (Use float values). 

#include<stdio.h>
#include<math.h>

void main(){
	float h,b;
	
	printf("Enter base of right-angled-triangle:\n");
	scanf("%f",&b);
	printf("Enter height of right-angled-triangle:\n");
	scanf("%f",&h);
	

	
	printf("Area of right-angled-triangle: %0.2f sq.unit\n",0.5*h*b);
	printf("hypotenuse of right-angled-triangle: %0.2f unit\n",pow(pow(b,2)+pow(h,2),0.5));
	
	
}
