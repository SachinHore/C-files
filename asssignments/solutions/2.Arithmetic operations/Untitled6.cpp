//Write a program to convert length in centimetre to meter, kilometre, inch and feet.

#include<stdio.h>

void main(){
	float cm;
	
	printf("Enter kilometer value\n");
	scanf("%f",&km);
	
	printf("%0.2f cm = %0.2f * 10^-5 km\n",cm,cm);
	printf("%0.2f cm = %0.2f meter\n",cm,cm*0.01);
	printf("%0.2f cm = %0.2f inch\n",cm,cm*0.393701);
	printf("%0.2f cm = %0.2f feet\n",cm,cm*3280.84);
}
