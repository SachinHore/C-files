//?	Write a program to print values of variables of different datatypes. Take values from user using scanf() function.

#include<stdio.h>
int main(){
	int i = 10;
	char ch = 'A';
	float f = 3.14;
	
	printf("Enter integer: \n");
	scanf("%d",&i);
	printf("Enter char: \n");
	scanf(" %c",&ch);
	printf("Enter float :\n");
	scanf("%f",&f);
	printf("%f\n",f);
	
	printf("%d\n",i);
	printf("%c\n",ch);
}
