//If a four-digit number is input through keyboard, 
//write a program to obtain sum of first and last digit of this number.

#include<stdio.h>

void main(){
	int n;
	
	printf("Enter no. : ");
	scanf("%d",&n);
	
	if((-9999<=n && n<=-1000)||(1000<=n && n<=9999)){
		printf("\nSume=%d",n/1000+n%10);
	}else{
		printf("\nNo.is not four digit");
	}
}

