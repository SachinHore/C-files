//Write a program to input month number and print number of days in that month.

#include<stdio.h>

int main(){
	int i;
	printf("Enter number of month: ");
	scanf("%d",&i);
	
	switch(i){
		case 1: printf("Jan = 31");
				break;
		case 2: printf("Feb = 28");
				break;
		case 3: printf("March = 31");
				break;
		case 4: printf("April = 30");
				break;
		case 5: printf("May = 31");
				break;
		case 6: printf("Jun = 30");
				break;
		case 7: printf("July = 31");
				break;
		case 8: printf("Aug = 31");
				break;
		case 9: printf("Sept = 30");
				break;
		case 10: printf("Oct = 31");
				break;
		case 11: printf("Nov = 30");
				break;
		case 12: printf("Dec = 30");
				break;
		
		default: printf("No. not valid");
		
	}
}
