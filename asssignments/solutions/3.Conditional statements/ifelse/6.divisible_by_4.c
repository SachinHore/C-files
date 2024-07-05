//Write a program to check whether number is divisible by 4 or not. 

#include<stdio.h>
int main(){
	int a;
	
	printf("Enter a number 1 : ");
	scanf("%d",&a);
	
	
	if(a!=0){
		if(a%4==0){
			printf("%d is divisible by 4",a);
		}else{
			printf("%d is not divisible by 4",a);
		}
	}else{
		printf("%d is Zero",a);
	}
	
}
