//Implement a program to find the rightmost set bit in a binary representation of a number.
#include<stdio.h>
void main(){
	int n=1,i;
	for(i=7;i>=0;i--){
		if((n&(1<<i))!=0){
			printf("%d",i);
			break;
		}
			
	}
}
