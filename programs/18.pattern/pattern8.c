#include<stdio.h>

void main(){
	
	int row,k=1;
	printf("Enter row: ");
	scanf("%d",&row);
	
	
	
	for(int i = 1; i<=row;i++){
		for(int j=1;j<=row;j++){
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
	
}
