#include<stdio.h>
int main(){
	int num, count=0;
	printf("Enter number: ");
	scanf("%d",&num);
	while(num>0){
		num=num>>1;
		count++;
	}
	printf("Bits required to represent are: %d",count);
}
