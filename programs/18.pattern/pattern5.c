/*
    *
   ***
  *****
 *******


*/

#include<stdio.h>

void main(){
	
	int row,i,j,k;
	
	printf("Enter row : \n");
	scanf("%d",&row);
	
	for(i = 1; i<=row;i++){
		
		for(j=1;j<=row-i;j++){
			printf(" ");
		}
		
		for(k=1;k<=i;k++){
			printf("*");
		}
		
		for(k=1;k<=i-1;k++){
			printf("*");
		}
		
		printf("\n");
	}
	
}
