//Write a program to check whether number is even or odd.
#include<stdio.h>
int main(){
	int a;
	
	printf("Enter a number 1 : ");
	scanf("%d",&a);
		
	if(a%2==0){
		printf("%d is even",a);
	}else{
		printf("%d is odd",a);
	}
	
}
