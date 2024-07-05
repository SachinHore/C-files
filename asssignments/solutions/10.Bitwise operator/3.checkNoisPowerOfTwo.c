//3.Create a program to check if a given number is a power of two using bitwise operations.

#include<stdio.h>
int main(){
	int n=15,i,count=0;
	for(i=0;i<8;i++){
		if((n&(1<<i))!=0)
			count++;
	}
	if(count==1)
		printf("Yes");
	else
		printf("No");
	
	
}
