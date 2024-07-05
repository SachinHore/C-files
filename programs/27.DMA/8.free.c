#include<stdio.h>
#include<stdlib.h>

int main(){
	int count,*ptr=NULL;
	ptr=(int*) malloc(40);
	printf("%d\n",ptr);
	printf("\n now doing memory free...");
	free(ptr);
	printf("\n Malloc memory is free now...");
	ptr=NULL;
	printf("\n%d ",ptr);
	
	return 0;
	
}
