#include<stdio.h>
void temp(){
	printf("Hello from temp function\n");
}

void num(int digit){
	printf("%d",digit);
}
void main(){
	void (*ptr)();
	void(*ptr1)(int);
	ptr=&temp;
	ptr1=&num;
	
	ptr();
	ptr1(100);
}
