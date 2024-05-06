//Write a program which takes ‘n’ integer from user and print its first three powers (n1, n2, n3). Use pow() function.

#include<stdio.h>
#include<math.h>
void main(){
	
	int n;
	
	printf("Enter a one integer number\n");
	scanf("%d",&n);
	
	printf("first power : %d\n",(int)pow(n,1));
	printf("second power : %d\n",(int)pow(n,2));
	printf("third power : %d\n",(int)pow(n,3));
	
}
