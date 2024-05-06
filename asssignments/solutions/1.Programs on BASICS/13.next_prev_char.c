//?	Write a program to read character from user. Print its next and previous character.

#include<stdio.h>
void main(){
	
	char ch;
	
	printf("Enter char: \n");
	scanf(" %c",&ch);
	
	printf("Previous char: %c \n",ch-1);
	printf("Next char: %c",ch+1);
}
