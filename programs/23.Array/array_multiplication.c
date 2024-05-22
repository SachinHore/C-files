#include<stdio.h>

int main(){

	int num1 []={1,2,3,4,5}, num2[]={10,11,12,13,14}, answer[5], i;
	for(i=0;i<5;i++){ 
		answer[i] = num1[i] * num2[i]; //10, 22, 36, 52, 70
	}
	printf("answer array elements are: \n");
	for(i=0;i<5;i++){ 
		printf("%d\t", answer[i]);
	}

}

