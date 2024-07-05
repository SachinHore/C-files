#include<stdio.h>

union emp{
	int n;
	double d;
	char ch;
}e1;

int main(){
	printf("\nsize %d\n",sizeof(e1));
	
	return 0;
}
