//Write a program to check whether a number is even or odd using switch case.
#include<stdio.h>

int main(){
	int a;
	printf("Enter a no: ");
	scanf("%d",&a);
	
	
	switch(a%2){
		case 0: printf("%d is even",a);
				break;
		case 1: printf("%d is odd",a);
				break;		
		
	}
}
