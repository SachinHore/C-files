#include<stdio.h>

void main(){
	
	int n,i=1,count=0;
	printf("Enter num: ");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0){
			count++;
			
		}
		i++;
	}
	if(count==2){
		printf("Prime");
	}else{
		printf("Not prime");
	}
	
}
