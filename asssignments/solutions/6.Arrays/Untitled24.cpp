#include<stdio.h>

int main(){
	int i=10;
	
	if( 1 || printf("Hello") ){
		printf("%d",i);
	}
	
	return 0;
}
