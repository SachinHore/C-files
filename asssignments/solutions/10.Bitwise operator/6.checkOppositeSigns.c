//Create a function to check if two integers have opposite signs without using arithmetic operators.
#include<stdio.h>
void checkOppositeSigns(int n1,int n2){
	printf("\n");
	if((n1&(1<<8))==(n2&(1<<8)))
		printf("Same signs");
	else
		printf("different signs");
	
	
}

void main(){
	
	checkOppositeSigns(10,-11);		
	checkOppositeSigns(100,11);
}
