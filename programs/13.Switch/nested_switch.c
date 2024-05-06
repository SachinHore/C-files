#include<stdio.h>

int main(){
	int num1,num2;
	
	printf("Enter num1:");
	scanf("%d",&num1);
	
	switch(num1){
		case 1:
			printf("you are in inside switch 1 case 1\n");
			printf("Enter num2:");
			scanf("%d",&num2);
			switch(num2){
				case 100:
					printf("case100");
					break;
				case 200:
					printf("case200");
					break;
				default:
					printf("you have entered wrong");
					break;
			}
			break;
		
		case 2:
			printf("case 2 executed");
			break;
			
		case 3:
			printf("case 3 executed");
			break;
			
		default:
			printf("case default executed");
			
	}
}
