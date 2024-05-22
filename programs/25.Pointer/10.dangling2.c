#include<stdio.h>
#include<stdlib.h>

int main(){
	int *ptr;
	int num=100;
	ptr=&num;
	printf("I am ptr and my address is %d",ptr);
	//printf("%d\n",ptr);
	free(ptr);
	printf("%d\n",ptr);
	return 0;
	
}
