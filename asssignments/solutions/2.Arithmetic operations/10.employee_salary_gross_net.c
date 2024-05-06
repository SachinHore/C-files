/*
Write a program to calculate Net salary of an employee. 
Accept Basic Salary (BS) from user. Print Gross Salary and Net Salary.
HRA is 20% of BS
DA is 40% of BS
PF is 10% of Gross Salary
Gross Salary = BS+HRA+DA
Net Salary = Gross Salary - PF 

*/

#include<stdio.h>

void main(){
	
	float bs,pf,gs,ns,da,hra;
	
	printf("Enter base salary = ");
	scanf("%f",&bs);
	
	hra = 0.2*bs;
	da = 0.4*bs;
	gs = bs+hra+da;
	pf = 0.1*gs;
	ns = gs - pf;
	
	printf("\nGross salary = %0.2f rs",gs);
	printf("\nNet salary = %0.2f rs",ns);
}
