/*
Write a program to print face value and place value of each digit in a four-digit number. If number is 1234, output format should be:
Place values are: 1000 200 30 4
Face values are: 1 2 3 4
*/

#include<stdio.h>

void main(){
	int n,n1,n2;
	
	printf("Enter four digit no.\n");
	scanf("%d",&n);
	
	if((-9999<=n && n<=-1000)||(1000<=n && n<=9999)){
		n1=n;
		printf("Place values are: ");
		for(int i = 1000; i>=1; i=i/10){
			n2=n1/i;
			printf("%d ",i*n2);
			n1=n1%i;
		}
	
		n1=n;
		printf("\nFace values are: ");
		for(int i = 1000; i>=1; i=i/10){
			n2=n1/i;
			printf("%d ",n2);
			n1=n1%i;
		}
	}else{
		printf("No. is no four digit");
	}
}
