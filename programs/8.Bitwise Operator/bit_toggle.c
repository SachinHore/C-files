#include<stdio.h>
int main(){
	int num,pos;
	printf("Enter number: \n");
	scanf("%d",&num);//5
	printf("Enter bit position: \n");
	scanf("%d",&pos);//1
	
	num=num^1<<pos;
	printf(" %d\n",num);
	return 0;
}
