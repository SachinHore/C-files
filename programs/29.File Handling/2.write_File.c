#include<stdio.h>

int main(){
	FILE *fptr; //File pointer
	char fname[20],text[50];
	int i=1,j=0;
	
	printf("Enter file name to create :");
	scanf("%s",&fname);
	
	fptr=fopen(fname,"w");  //write mode       
	if(fptr==NULL){
		printf("File does not create!!");
	}
	fflush(stdin);
	
	//we can writ using two function ->fprintf, fputs,fputc
	
	fprintf(fptr,"Hello shaktiman\n");//this text will get store inside file
	//fputs("This is testing for fputs p54...\n",fptr);
	//this text will get store inside file
	
	fputc('x',fptr);
	fputc('y',fptr);
	fputc('z',fptr);
	
	fclose(fptr);
	printf("\nData write successfully");
	
	
	return 0;
}
