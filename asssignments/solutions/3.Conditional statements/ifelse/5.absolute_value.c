//Write a program to find absolute value of a number. 

#include<stdio.h>
int main(){
	int a;
	
	printf("Enter a number 1 : ");
	scanf("%d",&a);
	
	
	if(a!=0){
		if(a>0){
			printf("absolute value of %d is %d",a,a);
		}else{
			printf("absolute value of %d is %d",a,-a);
		}
	}else{
		printf("%d is Zero",a);
	}
	
}
