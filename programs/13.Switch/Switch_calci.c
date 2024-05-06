#include<stdio.h>

int main(){
	int num1,num2,op;
	
	printf("Enter value of num1,num2:\n");
	scanf("%d%d",&num1,&num2);
	printf("select number for Operation:\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n5.MOD\n");
	scanf("%d",&op);
	
	switch(op){
		case 1:
			printf("\nAddition is: %d",num1+num2);
			break;
		case 2:
			printf("\nSubstraction is: %d",num1-num2);
			break;
		case 3:
			printf("\nMultipliction is: %d",num1*num2);
			break;
		case 4:
			printf("\nDivision is: %d",num1/num2);
			break;
		case 5:
			printf("\nModulus is: %d",num1%num2);
			break;
		default:
			printf("\nDefault");
			break;
		
	}
	
}
