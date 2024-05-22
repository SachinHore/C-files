#include<stdio.h>
#include<string.h>

void main(){
	char str1[50],str2[50]="jarvis", str3[50]; 
	printf("enter first str1: ");
	scanf("%s", &str1);
	printf("\nYou have entered: %s", str1); 
	printf("\nbefore copy str2 is: %s",str2);
	
	puts("\nCopying into str2...!!!");
	strcpy(str2, str1);// or strcpy(str2, str1) and str1 will get copied to str2 
	printf("\nAfter copying str2: %s\n",str2);

	
}
