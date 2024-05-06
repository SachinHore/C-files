/*
Write a program to accept roll no, name and marks of 6 subjects of a student. 
Calculate and print Aggregate marks, Average marks and Percentage with roll number and name of student. 
Use implicit and explicit type conversion.

*/

#include<stdio.h>

void main(){
	int rno,total_marks=0;
	int marks[6];
	char name[30];
	
	
	
	printf("Enter roll no.of student = ");
	scanf("%d",&rno);
	printf("\nEnter name of student = ");
	scanf("%s",&name);
	printf("\nEnter marks of student:\n");
	
	for(int i=0;i<6;i++){
		printf("Subject_%d = ",i+1);
		scanf("%d",&marks[i]);
	}
	
	
	for(int i=0;i<6;i++){
		total_marks += marks[i];
	}
	
	printf("Roll_no.=%d , Name=%s \n",rno,name);
	printf("Aggregate marks = %d\n",total_marks);
	printf("Average marks = %d\n",total_marks/6);
	printf("Percentage marks = %d percentage \n",total_marks/6);
	
	
}
