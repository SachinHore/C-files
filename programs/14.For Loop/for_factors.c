//WAP to find factors

#include<stdio.h>

int main(){
	int num;
	printf("Enter number:\n");
	scanf("%d",&num);
	printf("factors of %d are:\n",num);

	for(int i = 1 ; i<=num ; i++){
		if(num%i==0){
			printf("%d\n",i);
		}
	}
}
