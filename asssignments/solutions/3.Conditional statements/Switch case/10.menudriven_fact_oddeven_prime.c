/*
Write a menu driven program which has following options:
Factorial of a number
Prime or not
Odd or Even
Exit
Once a menu item is selected the appropriate action should be taken. Unless the user selects the ‘Exit’ option the program should continue to work.


*/

#include<stdio.h>

int main(){
	int a,b,fact;
	
	while(1){
		printf("Press a no below: \n1.Factorial of a number\n2.Prime or not\n3.Odd or Even\n4.Exit\n");
		scanf("%d",&a);
		switch(a){
			case 1: printf("Factorial of a number");
					printf("\nEnter number: ");
					scanf("%d",&b);
					fact=1;
					for(int i = 1;i<=b;i++){
						fact=fact*i;
					}
					printf("\nFactorial of %d = %d",b,fact);
					break;
			case 2: printf("Prime or not");
					printf("\nEnter number: ");
					scanf("%d",&b);
					
					for(int i = 2;i<=b/2;i++){
						if(b%i==0){
							printf("%d is not prime",b);
							break;
						}
						if(i==b/2){
							printf("%d is prime",b);
							break;
						}
					}
					break;
			case 3: printf("Even Odd checking");
					printf("\nEnter number: ");
					scanf("%d",&b);
					switch(b%2==0){
						case 1:printf("%d is Even",b);
								break;
						case 0:printf("%d is Odd",b);
								break;
					}
					break;
			case 4: printf("Exit");
					return 0;
			default : printf("Enter valid no. among 1,2,3,4");		
		
		}
		printf("\n---------------------------------------------------\n\n");
	}
}

