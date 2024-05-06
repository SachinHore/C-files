#include<stdio.h>
void main(){
	int op,num1,num2;
	
	printf("Enter operation: \n1.Addition\n2.Substraciton\n3.Multipliction\n4.Division\n");
	scanf("%d",&op);
	
	printf("Enter first number\n");
	scanf("%d",&num1);
	
	printf("Enter second number\n");
	scanf("%d",&num2);
	
	if(op==1){
		printf("Addition is: %d\n",num1+num2);
	}else if(op==2){
		printf("Substraction is: %d\n",num1-num2);
	}else if(op==3){
		printf("Multipliction is: %d\n",num1*num2);
	}else if(op==4){
		printf("Division is: %d\n",num1/num2);
	}else{
		printf("Please type proper input...");
	}
	
	
}

