/*
Write a program to take Age from user. Display message accordingly
Age > 18 then “License will be granted”
Age <= 18 then “License will not be granted”

*/

#include<stdio.h>
int main(){
	int a;
	
	printf("Enter age : ");
	scanf("%d",&a);
	
	
	if(a!=0){
		if(a<=18){
			printf("License will not be granted");
		}else{
			printf("License will be granted");
		}
	}else{
		printf("%d is Zero",a);
	}
	
}
