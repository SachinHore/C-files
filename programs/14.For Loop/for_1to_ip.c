#include<stdio.h>

void main(){
	
	int first,last_num,i;
	printf("Enter first number: ");
	scanf("%d",&first);
	printf("Enter last number: ");
	scanf("%d",&last_num);
	
	for(i=first;i<=last_num;){
		if(i%2==0){
			printf("%d\n",i);
			
		}
		i++;
	}
	
	
}
