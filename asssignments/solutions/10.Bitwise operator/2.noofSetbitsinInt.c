//2.Implement a function to count the number of set bits (1s) in an integer.

#include<stdio.h>
int main(){
	int num1=10,i,count=0;
	
	for(i=0;i<8;i++){
		if((num1&(1<<i))!=0)
			count++;
	}
	
	printf("count=%d",count);

}
