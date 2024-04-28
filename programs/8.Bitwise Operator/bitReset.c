#include<stdio.h>
int main(){
	int num, pos;
	printf("Enter number ");
	scanf("%d",&num);
	printf("Enter position to reset bit ");
	scanf("%d",&pos);
	int temp=num & ~(1<<pos);
	printf("%d",temp);
}

