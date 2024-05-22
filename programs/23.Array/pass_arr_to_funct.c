#include<stdio.h>

void printArray (int newArr[]){
	int i;
	printf("\nPrinting from printArray function\n"); 
	for(i=0;i<6;i++)
		printf("%d ", newArr[i]);
}

void arr2(int num) {
	printf("%d", num);
}

int main(){
	int arr[]={1,2,3,4,5,6};
	arr2(arr[0]);//arr2(1)
	arr2(arr[1]);
	arr2(arr[2]);
	arr2(arr[3]);
	arr2(arr[4]);
	arr2(arr[5]);
	printArray(arr);
}
