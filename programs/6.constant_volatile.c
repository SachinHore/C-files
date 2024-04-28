#include<stdio.h>

int main(){
	
	const int pi = 312; //read only variable
	printf("%d/n",pi);
	
	// pi=1345; //assignment of const var not possible
	printf("%d/n",pi);
	volatile int num =234;
	num=123;
	printf("from shaktiman: %d", num);
	return 0;
}
