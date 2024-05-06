//Write a program to reverse a five-digit number.

#include<stdio.h>

void main(){
	
	long int no1,no2;
	
	printf("Enter five digit number : \n");
	scanf("%ld",&no1);
	
	if((no1>=-99999 && no1<=-10000)||(no1<=99999 && no1>=10000)){
		
		for(int i = 1;i<=5;i++){
			no2 = no1%10;
			no1 = no1/10; 
			printf("%ld",no2);  
		}
		
	}else{
		printf("No. is not five digit no.");
	}
	
	
	
	//printf("Reverse of %ld = %ld",no1,no2);
}
