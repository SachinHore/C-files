#include<stdio.h>

int main(){
	int a=10,b=30;
	int *const ptr=&a;//now this pointer is constant i.e. you cant hange value of this pointer 
	//ptr=&b;//you cant change address which is inside pointer 
	*ptr=30;//but you can change value pointed by that pointer but memory location will remain same
	ptr=&b;
	printf("%d",*ptr);
}
