//Write a program to check whether number is positive or negative.

#include<stdio.h>
int main(){
	int a;
	
	printf("Enter a number 1 : ");
	scanf("%d",&a);
	
	
	if(a!=0){
		if(a>0){
			printf("%d is positive",a);
		}else{
			printf("%d is negative",a);
		}
	}else{
		printf("%d is Zero",a);
	}
	
}
