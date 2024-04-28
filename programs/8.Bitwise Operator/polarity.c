#include<stdio.h>
int main(){
	int num;
	scanf("%d",&num);//10
	if((num & 1<<31)==0){
		printf("psditive");
		
	}
	else{
		printf("negative");
	}
}
