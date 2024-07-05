#include<stdio.h>

int main(){
	FILE *fp; //File pointer
	char fName[20];
	printf("Enter file name to create :");
	scanf("%s",&fName);
	
	fp=fopen(fName,"w");  //write mode       
	if(fp==NULL){
		printf("File does not create!!");
	}
	printf("File created successfully!!");
	return 0;
}
