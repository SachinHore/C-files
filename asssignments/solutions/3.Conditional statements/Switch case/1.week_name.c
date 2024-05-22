//Write a program to print day of week name using switch case.

#include<stdio.h>

int main(){
	int i;
	printf("Enter number of day: ");
	scanf("%d",&i);
	
	switch(i){
		case 1: printf("Sunday");
				break;
		case 2: printf("Monday");
				break;
		case 3: printf("Tuesday");
				break;
		case 4: printf("Wednesday");
				break;
		case 5: printf("Thursday");
				break;
		case 6: printf("Friday");
				break;
		case 7: printf("Satday");
				break;
		default: printf("No. not valid");
		
	}
}
