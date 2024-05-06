#include<stdio.h>

void main(){
	
	int sum=0,i;
	for(i=0;i<=10;i++){
		if(i%2==0){
			printf("%d",i);
			sum=sum+i;
		}
	}
	printf("\n Addition of even number is %d",sum);
	
}
