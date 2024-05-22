#include<stdio.h>

int main (){
	int num[5],i,j=1,index,ip;
	
	printf("\ntaking input from user\n");
	for(i=0;i<5;i++){
		printf("\nEnter %d value: ",i+1);
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++){
		printf("Array is: %d\t%d\n",num[i],&num[i]);
	}
	printf("Enter index of number you want to change: ");
	scanf("%d",&index);
	printf("Enter new number: ");
	scanf("%d",&ip);
	
	num[index] = ip;//num[2]=3000

	printf("New Updated array is: \n");

	for(i=0;i<5;i++){
		printf("Array is: %d\n",num[i]);
	}
		
	
}
