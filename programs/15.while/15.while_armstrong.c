#include<stdio.h>
#include<math.h>

void main(){
	int i,j,digit,cube=0;
	printf("Enter number: ");
	scanf("%d",&j);
	
	i=j;
	while(j<0){
		digit =j %10;
		j= j /10;
		cube = cube +pow(digit,3);
		
	}
	if(cube==i){
		printf("This is armstrong number %d",i);
	}else{
		printf("This is not armstrong number %d",i);
	}
}
