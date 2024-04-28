#include<stdio.h>

void main(){
	int num;
	
	printf("Enter number:\n");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("\n%d is Even\n",num);
	}
	else{
		printf("%d is not Even\n",num);
	}
}
