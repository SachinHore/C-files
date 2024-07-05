/*
3.	WAP to multiply each element of array by 3. Store result in:
a.	Different array
b.	Same array.
*/
#include<stdio.h>

int main(){
	int arr1[10],arr2[10],size;
	
	printf("Enter size of array: \n");
	scanf("%d",&size);
	
	printf("\nEnter elements of array: \n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr1[i]);
	}
	
	for(int i=0;i<size;i++){
		arr2[i]=arr1[i]*3;
	}
	
	for(int i=0;i<size;i++){
		arr1[i]=arr1[i]*3;
	}
	
	printf("\nFirst array: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr1[i]);
	}
	
	printf("\nSecond array: \n");
	for(int i=0;i<size;i++){
		printf("%d\t",arr2[i]);
	}
	
	
	
}
