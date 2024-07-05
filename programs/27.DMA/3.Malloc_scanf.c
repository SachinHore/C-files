#include<stdio.h>
#include<stdlib.h>

int main(){
	int count,*ptr,i,j;
	printf("\nEnter total count of number want to enter: ");
	scanf("%d",&count);
	ptr=malloc(count*sizeof(int));
	
	for(i=0;i<count;i++){
		printf("\nEnter %d value: ",i+1);
		scanf("%d",ptr+i);
	}
	
	for(i=0;i<count;i++){
		printf("\n%d\n",*(ptr+i));
		
	}
	
	return 0;
}
