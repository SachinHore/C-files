#include<stdio.h>

int main(){
	int i, int_arr1[5], int_arr2[5]={11,12,15,17,16}, int_arr3[5]={1,2,3};
	int int_arr4[5]={11,12,15,17,16,100,200}, int_arr5[]={11,12,15,17,16};
	static int arrOfstatic[7];
	
	printf("Array with dimension but no initializion \n");
	for(i=0;i<5;i++)
		printf("%d\t",int_arr1[i]);
	
	printf("\n\nArray initialized with exact dimension \n");
	for(i=0;i<5;i++)
		printf("%d\t",int_arr2[i]);
	
	printf("\n\nArray initialized with less elements  \n");
	for(i=0;i<5;i++)	 
		printf("%d\t",int_arr3[i]);
	
	printf("\n\narr initialized with more elements  \n");
	for(i=0;i<7;i++)
		printf("%d\t",int_arr4[i]);
		
	printf("\n\narr initialized but not dimension given  \n");
	for(i=0;i<5;i++)
		printf("%d\t",int_arr5[i]);
	
	printf("\n\nStatic Array with no initialization \n");
	for(i=0;i<5;i++)
		printf("%d\t",arrOfstatic[i]);
		
	
}
