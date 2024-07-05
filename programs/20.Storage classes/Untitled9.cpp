#include<stdio.h>

int n=20;

int main1(int n){

	
	
	printf("\nc = %d",n);//20
}

int main(){
	static int n;
	printf("a = %d",n);//0
	n = 12;
	printf("\nb = %d",n);//12
	main1(4);
}
