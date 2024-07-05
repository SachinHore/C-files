#include<stdio.h>
#include<stdlib.h>

int main(){
	int size,*ptr,n;
	printf("\nHow many number you want to enter: ");
	scanf("%d",&n);
	ptr=(int *) malloc(n*sizeof(int));
	
	if(ptr==NULL){
		printf("No memory allocated");
		
	}else{
		printf("Memory allocated from %d",ptr);
	}
	return 0;
}
