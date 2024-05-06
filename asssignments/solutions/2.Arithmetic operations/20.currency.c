/*
Consider a currency system in which there are notes of six denominations, namely, 
Re.1, Rs.2, Rs.5, Rs.10, Rs.50, Rs.100. 
If a sum of Rs. N is entered through keyboard, 
write a program to compute the smallest number of notes that will combine to give Rs. N.

*/

#include<stdio.h>

void main(){
	
	int n;
	
	printf("Enter sum of N : ");
	scanf("%d",&n);
	
	printf("\nNo of Rs.100 = %d",n/100);
	n=n%100;
	printf("\nNo of Rs.50 = %d",n/50);
	n=n%50;
	printf("\nNo of Rs.10 = %d",n/10);
	n=n%10;
	printf("\nNo of Rs.5 = %d",n/5);
	n=n%5;
	printf("\nNo of Rs.2 = %d",n/2);
	n=n%2;
	printf("\nNo of Rs.1 = %d",n/1);
	n=n%1;
	
	
}
