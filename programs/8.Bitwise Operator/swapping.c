#include<stdio.h>
int main(){
	int num1=10,num2=5;
	printf("before swapping : \nnum1: %d\t num2: %d\n",num1,num2);
	num1=num1^num2;
	num2=num1^num2;
	num1=num1^num2;
	printf("after swapping :\nnum1: %d\t num2: %d\n",num1,num2);
}
