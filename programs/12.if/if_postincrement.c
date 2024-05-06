#include<stdio.h>
void main(){
	int m=-1,n=3;
	if(m++ && n)
		printf("Hello\n");//output
		
	else
		printf("World\n");
	
	
	if(++m && n)
		printf("Hello\n");
		
	else
		printf("World\n");//output
	
}
