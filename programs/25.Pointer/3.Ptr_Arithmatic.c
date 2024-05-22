#include<stdio.h>

int main(){
	int a,b,*j,*x;
	printf("\nEnter a: ");
	scanf("%d",&a);
	printf("\nEnter b: ");
	scanf("%d",&b);
	j= &a;
	x= &b;
	printf("\naddition of ptr: %d ",*j + 1);
	printf("\nsum of ptr: %d ",*j - *x);
	printf("\nmul of ptr: %d ",*j * *x);
	printf("\ndiv of ptr: %d ",*j / *x);
	return 0;
}
