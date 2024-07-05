#include<stdio.h>
int main(){
	FILE *fptr;
	char fname[20],text[50];
	int i=1,j=0;
	
	printf("\nEnter file name to open :");
	scanf("%s",fname);
	
	fptr=fopen(fname,"a+");//append mode
	
	if(fptr==NULL){
		printf("\nFile does not opent!!");
	}
	printf("\nFile opend successfully\n");
	
	printf("\nEnter text :");
	fflush(stdin);
	gets(text);
	fprintf(fptr,text);
	printf("\nData appended successfully.");
	return 0;
}
