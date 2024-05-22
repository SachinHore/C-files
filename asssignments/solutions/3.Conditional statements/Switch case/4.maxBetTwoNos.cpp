//Write a program to find maximum between two numbers using switch case

#include<stdio.h>

int main(){
	int a,b;
	printf("Enter a first no: ");
	scanf("%d",&a);
	printf("\nEnter a second no: ");
	scanf("%d",&b);
	
	switch(a>b){
		case 1: printf("%d is max than %d",a,b);
				break;
		case 0: printf("%d is max than %d",b,a);
				break;		
		
	}
}
