/* 
Write a program to take grade from user and print message accordingly.

GRADE	MESSAGE
A	Excellent
B	Very Good
C and D	You have passed
F	Better try again
Default	Enter valid grade

*/

#include<stdio.h>

int main(){
	int a;
	printf("Enter a grade: ");
	scanf("%c",&a);
	
	
	switch(a){
		case 'A': printf("Excellent");
				break;
		case 'B': printf("Very Good");
				break;
		case 'C':
				
		case 'D': printf("You have passed");
				break;
		case 'F': printf("Better try again");
				break;
		default: printf("Enter valid grade");
				break;		
		
	}
}
