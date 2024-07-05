#include<stdio.h>
#include<stdlib.h>

int main(){
	int count,*ptr=NULL;
	printf("\nEnter total count of number want to enter: ");
	scanf("%d",&count);
	
	ptr=(int *) malloc(count*sizeof(int));
	
	printf("start address : %d\n",ptr);
	printf("\nInitial value at address given by malloc: %d (its Garbage)",*ptr);
	
	return 0;
}
