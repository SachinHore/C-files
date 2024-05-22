#include<stdio.h>

void main(){
	int range, n1=0,n2=1,n3,i=2;
	printf("Enter number");
	scanf("%d",&range);
	
	printf("%d %d",n1,n2);
	
	while(i<range){
		n3=n1+n2;
		n1=n2;
		n2= n3;
		printf(" %d",n3);
		i++;
	}
	
}
