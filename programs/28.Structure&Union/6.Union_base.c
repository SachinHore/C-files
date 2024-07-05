#include<stdio.h>

union student{
	int num1,num2;
};

int main(){
	union student s1;
	s1.num1=100;
	printf("\nnum1 is: %d",s1.num1);
	s1.num2=200;
	printf("\nnum2 is: %d",s1.num2);
	
	return 0;
	
}



