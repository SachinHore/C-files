#include<stdio.h>

void main(){
	
	int i,j;
	printf("Enter value of j: (between 0 to 10)");
	scanf("%d",&j);
	
	for(i=0;i<=10;i++){
		if(j==i){
			printf("\n now break is applied");
			break;
		}
		printf("%d\n",i);
	}
	printf("\nout of for ");
	
}
