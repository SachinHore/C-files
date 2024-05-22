#include<stdio.h>

int main(){
	int a=100;
	float b=12.34;
	char ch='A';
	void *ptr;
	
	ptr=&ch;
	//printf("%d\n",&b);
	printf("%c\n",*((char *)ptr));
	
	ptr=&a;
	printf("%d\n",*((int *)ptr));
	
	ptr=&b;
	printf("%f\n",*((float *)ptr));
	
	
}
