//?	Write a program to read a lowercase letter and a uppercase letter from user. Print their corresponding opposite cases.

#include<stdio.h>

void main(){
	
	char ch;
	
	printf("Enter char: \n");
	scanf(" %c",&ch);
	
	if(('a'<= ch) && 'z'>= ch) {
		printf("Upper case: %c",'A'+(ch - 'a'));
	}else if(('A'<= ch) && 'Z'>= ch) {
		printf("Lower case: %c",'a'+(ch - 'A'));
	}else{
		printf("Entered char is not valid");
	}
	
}
