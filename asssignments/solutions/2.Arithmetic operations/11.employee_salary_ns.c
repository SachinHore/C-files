/*
Write a program to calculate Net salary of an employee. 
Accept Basic Salary (BS) from user. Print Net Salary.
	Dearness Allowance (DA) = 150% of BS
	Income Tax (IT) = 30% of BS
	Provident Fund (PF) = 8.33% of BS
	Net Salary = BS + DA - (IT + PF)
*/

#include<stdio.h>

void main(){
	
	float bs,pf,ns,da,it;
	
	printf("Enter base salary = ");
	scanf("%f",&bs);
	
	it = 0.3*bs;
	da = 1.5*bs;
	pf = 0.0833*bs;
	
	ns = bs+da-(it+pf);
	
	printf("\nNet salary = %0.2f rs",ns);
	
}

