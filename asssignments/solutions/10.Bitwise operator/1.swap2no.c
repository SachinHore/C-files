//1.Write a C program to swap two numbers using bitwise XOR.


#include<stdio.h>
int main(){
	int num1=10,num2=20;
	
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;
	
	printf("%d %d ",num1,num2);
	
}


