//4.WAP to print table of any number using array. 
//Take number from user.(Output format: 2*1=2)
#include<stdio.h>

int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10},n;
	
	printf("Enter no: \n");
	scanf("%d",&n);
	
	
	
	printf("\nTable of %d: \n",n);
	for(int i=0;i<10;i++){
		printf("%d * %d = %d\n",n,arr[i],n*arr[i]);
	}
	
	
	
}
