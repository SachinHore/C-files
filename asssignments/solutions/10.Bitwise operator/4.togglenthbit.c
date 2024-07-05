//Write a C function to toggle the nth bit of a given integer.
#include<stdio.h>
void main(){
	int num=10,nth=3;
			
	printf("%d",num^(1<<nth));
}
