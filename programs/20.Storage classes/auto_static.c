#include<stdio.h>

void temp(){
	static int num=123;
	num++;
	printf("\ninit value %d\n",num);
}

int main(){
	auto int n = 12;
	printf("Auto n is %d",n);
	temp();
	temp();
	temp();
}
