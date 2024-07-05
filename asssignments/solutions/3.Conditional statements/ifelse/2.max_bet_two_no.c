//Write a program to find maximum between two numbers.
#include<stdio.h>
int main(){
	int a,b;
	
	printf("Enter a number 1 : ");
	scanf("%d",&a);
	
	printf("Enter a number 2 : ");
	scanf("%d",&b);
	
	if(a>b){
		printf("%d is maximum",a);
	}else{
		printf("%d is maximum",b);
	}
	
}
