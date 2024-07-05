/*
2.	Write a menu driven program for:
	a.Deleting an element of array
	b.Inserting an element in array
	c.Searching an element in array
*/

#include<stdio.h>
int main(){
	int arr[50]={2,4,3,5,67,78,9,2,3,6},i=0,op,arrySize=10,pos,ele;
	
//	printf("Enter marks of 5 subjects: \n");
//	for(int i=0;i<5;i++){
//		scanf("%d",&marks[i]);
//	}
	
	
	while(1){
		printf("\nCurrent array : ");
		for(i=0;i<arrySize;i++){
			printf("%d ",arr[i]);
		}
		printf("\nEnter option below: \n1.Deleting an element of array\n2.Inserting an element in array \n3.Searching an element in array\n4.Exit\n");
		scanf("%d",&op);
		
	
		switch(op){
			case 1: printf("\nDeleting an element of array\n");
					printf("Enter position of emement in array to delete :");
					scanf("%d",&pos);
					for(int i=pos;i<arrySize-1;i++){
						arr[i]=arr[i+1];
						
					}
					//arr[arrySize-1]=0;
					arrySize--;
					break;
			case 2:printf("\nInserting an element in array");
					printf("\nEnter a emement  to insert in array:");
					scanf("%d",&ele);
					printf("\nEnter position of emement in array to insert :");
					scanf("%d",&pos);
					for(int i=arrySize-1;i>=pos;i--){
						arr[i+1]=arr[i];
						
					}
					arr[pos]=ele;
					arrySize++;
					break;
			case 3:printf("Searching an element in array\n");
					printf("\nEnter a emement  to search in array:");
					scanf("%d",&ele);
					for(int i=0;i<arrySize;i++){
						
						if(arr[i]==ele){
							printf("Element %d is located at %d location in array",ele,i);
							break;
						}
						if(i==arrySize-1){
							printf("Element %d is not located in array",ele);
						}
						
					}
					break;
			case 4:printf("EXIT");
					return 0;
		}
	}	
}
