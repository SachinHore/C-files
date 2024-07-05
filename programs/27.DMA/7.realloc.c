#include<stdio.h>
#include<stdlib.h>

int main(){
	int count,*ptr=NULL,i,n;
	printf("\nEnter total count of number want to enter: ");
	scanf("%d",&count);
	ptr=(int *) malloc(count*sizeof(int));
	
	
	
	for(i=0;i<count;i++){
		printf("\nEnter %d value: ",i+1);
		scanf("%d",ptr+i);
	}
	
	for(i=0;i<count;i++){
		printf("\n%d\t%d\n",*(ptr+i),(ptr+i));
		
	}
	
	
	printf("\n\nEnter more number count: ");
	scanf("%d",&n);
	ptr=realloc(ptr,n*sizeof(int));
	
	for(i=count;i<(count+n);i++){
		printf("\nEnter %d value: ",i+1);
		scanf("%d",ptr+i);
	}
	
	for(i=0;i<(count+n);i++){
		printf("\n%d and address %d",*(ptr+i),ptr+i);
		
	}
	
	return 0;
}
