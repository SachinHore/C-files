/*
    *
   **
  ***
 ****


*/



#include<stdio.h>

void main(){
	
	int row;
	
	printf("Enter row : \n");
	scanf("%d",&row);
	
	for(int i = 1; i<=row;i++){
		for(int j=1;j<=row-i;j++){
			printf(" ");
		}
		for(int k=1;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
	
}
