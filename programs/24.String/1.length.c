#include<stdio.h>
#include<string.h>
void main(){
	int length;
	
	char ch[50];
	puts("Enter string: ");
	fflush(stdin);
	gets(ch);
	length = strlen(ch);
	printf("\nstring length using function: %d\n",length);
	
	
}
