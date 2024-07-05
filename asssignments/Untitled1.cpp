//Create a structure named "Person" with members for name, age, and address. Write a 
//program to read details of five persons and display them sorted by age in ascending order
#include<stdio.h>
#define size 5

struct person{
	char name[50];
	int age;
	char address [50];
};

void arraySort(struct person *arr){
	struct person temp;
	for(int i=0; i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if((arr[i].age) > (arr[j].age )){
				temp = arr[i];
				arr[i] = arr[j];	
				arr[j] = temp;
				
			}
		}
			
	}	
}


int main()
{
	struct person arr[size];
	for(int i=0;i<size;i++)
		{	printf("Enter person%d name: ",i+1);
			scanf("%s",&arr[i].name);
			printf("Enter person age: ");
			scanf("%d",&arr[i].age);
			printf("Enter Address of person : ");
			scanf("%s",&arr[i].address);
			printf("\n");
		}
	
	arraySort(arr);
	
	printf("Name \t\t age\t\taddress\n");
	for(int i=0;i<size;i++)
	{
		
		printf("%s\t\t%d\t\t%s\n",arr[i].name,arr[i].age,arr[i].name);
	}
		
	
}
