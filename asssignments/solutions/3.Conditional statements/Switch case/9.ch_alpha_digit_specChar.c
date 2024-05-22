//Write a program to check whether entered character is alphabet, digit or special character.

#include<stdio.h>

int main(){
	char ch;
	printf("Enter a char: ");
	scanf("%c",&ch);
	
	
	switch(ch>=48 && ch<=57){
		case 1: printf("digit");
				break;
		case 0: switch(ch>=97 && ch<=122 || ch>=65 && ch<=90){
					case 1:printf("Alphabet");
							break;
					case 0:printf("Special Char");
							break;
				break;
				}	
	}
}

//a=97, z=122, A=65, Z=90, 0=48, 9=57
