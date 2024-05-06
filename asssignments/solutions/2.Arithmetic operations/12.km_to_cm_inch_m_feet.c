//Write a program to convert length in kilometre to centimetre, meter, inch and feet.

#include<stdio.h>

void main(){
	float km;
	
	printf("Enter kilometer value\n");
	scanf("%f",&km);
	
	printf("%0.2f km = %0.2f cm\n",km,km*100000);
	printf("%0.2f km = %0.2f meter\n",km,km*1000);
	printf("%0.2f km = %0.2f inch\n",km,km*39370.1);
	printf("%0.2f km = %0.2f feet\n",km,km*3280.84);
}
