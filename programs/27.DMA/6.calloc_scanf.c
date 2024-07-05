#include<stdio.h>
#include<stdlib.h>

int main(){
	int count,*ptr=NULL,i;
	printf("\nEnter total count of number want to enter: ");
	scanf("%d",&count);
	ptr=(int *) calloc(count,sizeof(int));
	
	if(ptr==NULL){
		printf("No memory allocated");
		
	}else{
		printf("Memory allocated of size %d bytes from %d",count*sizeof(int),ptr);
	}
	
	for(i=0;i<count;i++){
		printf("\nEnter %d value: ",i+1);
		scanf("%d",ptr+i);
	}
	
	for(i=0;i<count;i++){
		printf("\n%d\t%d\n",*(ptr+i),(ptr+i));
		
	}
	
	return 0;
}
