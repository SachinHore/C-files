//Write a program to calculate perimeter and area of a rectangle and square. Take length, breadth (for rectangle) and side (for square) from user.
#include<stdio.h>

void main(){
	float l,b,s;
	
	printf("Enter length of rectangle:\n");
	scanf("%f",&l);
	printf("Enter breadth of rectangle:\n");
	scanf("%f",&b);
	printf("Enter side of square:\n");
	scanf("%f",&s);

	
	printf("Area of rectangle: %0.2f sq.unit\n",l*b);
	printf("Perimeter of rectangle: %0.2f unit\n",2*(l+b));
	printf("Area of square: %0.2f sq.unit\n",s*s);
	printf("Perimeter of square: %0.2f unit\n",4*s);
	
}
