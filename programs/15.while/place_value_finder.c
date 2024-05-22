#include<stdio.h>

void main(){
	
	int num, digit, rem, power=0,place;
	printf("Enter number : ");
	scanf("%d",&num);
	printf("I am talented Enter digit which is in that number:");
	scanf("%d",&digit);
	
	while(num >=1){
		rem = num %10;
		if(rem == digit){
			place = rem *pow(10,power);
			printf("Place value of digit %d of digit %d",rem,place);
		}
		num = num /10;
		power++;
		
	}
	
}
