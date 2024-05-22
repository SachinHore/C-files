/*
*****
*****
*****
*****

*/




#include<stdio.h>

void main(){
	
	int row, col;
	printf("Enter row: ");
	scanf("%d",&row);
	
	printf("Enter col: ");
	scanf("%d",&col);
	
	for(int i = 1; i<=row;i++){
		for(int j=1;j<=col;j++){
			printf("*");
		}
		printf("\n");
	}
	
}
