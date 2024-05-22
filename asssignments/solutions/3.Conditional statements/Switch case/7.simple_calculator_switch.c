//Write a program to create Simple Calculator using switch case.


#include<stdio.h>
#include<stdlib.h>

int main(){
	int a,b;
	char op;
	printf("Enter a no1: ");
	scanf("%d",&a);
	printf("Enter a no2: ");
	scanf("%d",&b);
	printf("Enter a operator among this (+,-,/,*): ");
	fflush(stdin);
	scanf("%c",&op);
	
	
	switch(op){
		case '+': printf("%d + %d = %d",a,b,a+b);
				break;
		case '-': printf("%d - %d = %d",a,b,a-b);
				break;
		case '/': printf("%d / %d = %f",a,b,(float)a/b);
				break;
		case '*': printf("%d * %d = %d",a,b,a*b);
				break;
		default:printf("Enter valid operator");		
		
	}
}
