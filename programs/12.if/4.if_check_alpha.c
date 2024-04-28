#include<stdio.h>

void main(){
	char alpha;//B->66
	printf("Enter alphabet:");
	scanf("%c",&alpha);
	
	if((alpha>='a' && alpha<='z') || (alpha>='A' && alpha<='Z')){
		printf("\nYou have entered alphabet\n");
	}
	else{
		printf("not entered alphabet");
	}
}
