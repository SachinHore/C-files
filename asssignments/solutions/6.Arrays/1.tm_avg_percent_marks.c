/*
1.	Write a menu driven program which takes marks of 5 subjects of a student (out of 100). 
Calculate TOTAL MARKS, AVERAGE MARKS and PERCENTAGE of a student.
*/
#include<stdio.h>
int main(){
	int marks[5],tm=0,op;
	
	printf("Enter marks of 5 subjects: \n");
	for(int i=0;i<5;i++){
		scanf("%d",&marks[i]);
	}
	for(int i=0;i<5;i++){
		tm=tm+marks[i];
	}
	
	while(1){
		printf("\nEnter option below: \n1.TOTAL MARKS\n2.AVERAGE MARKS \n3.PERCENTAGE\n4.Exit\n");
		scanf("%d",&op);
	
		switch(op){
			case 1:printf("Total marks = %d\n",tm);
					break;
			case 2:printf("Average marks = %d\n",tm/5);
					break;
			case 3:printf("Percentage = %d %c \n",tm/5,'%');
					break;
			case 4:printf("EXIT");
					return 0;
		}
	}
	
		
	
}
