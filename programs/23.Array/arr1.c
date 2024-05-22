#include<stdio.h>

int main(){
	//int arr[];//not allowed
	int arr[10];//declare
	int arr2[]={1,2,3,4,5};//declare
	int arr1[10]={10,20,30,40.50};//declare
	char ch[]={'A','R','E','R'};
	float farr[]={1.23,4.23,5.45};
	int j=0;
	
	printf("%d\n",&arr2[0]);
	printf("%d",arr2);//points to starting address of array
	printf("%d\n",sizeof(arr));
	printf("%d\n",sizeof(arr2));
	printf("%d\n",sizeof(ch));
	printf("%d\n",sizeof(farr));
	
	printf("Printing array: \n");
	for(int i=0;i<5;i++){
		printf("%d ",arr1[i]);
	}
	
	printf("\n\nPrinting reverse array: \n");
	for(int i=4;i>=0;i--){
		printf("%d ",arr1[i]);
	}
	
}
