#include<stdio.h>

int temp(int *num){
	*num=*num+100;
}

void main(){
	int num=123;
	int *ptr;
	ptr=&num;
	
	printf("address of num using num: %d\n",&num);
	printf("address of num using pointer: %d\n",ptr);
	printf("value of num using num: %d\n",num);
	printf("value of num using pointer: %d\n",*ptr);
	temp(&num);
	printf("%d",num);
	
	
}
