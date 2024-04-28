#include<stdio.h>
vaid main(){
	printf("%f\n",(float)1234);//explicit TP
	printf("%c\n",65);//implicit TP
	
	int num1=10,num2=20;
	printf("%d\n",num1+num2);//30
	
	float fnum1=10.10,fnum2=20.00;
	printf("%f\n",fnum1+fnum2);//30.10
	
	int num3=10;
	float fnum3=20.10;
	printf("%d\n",num3+fnum3);//wrong way give garbage value
	printf("%f\n",num3+fnum3);//implicit typecast 10.000000 + 20.100000 =>30.100000
	
	int num4=10,num5=3;
	printf("div is: %f\n",num4/num5);//typecast to float value
	
	float val1=40.50,val2=10.50;
	printf("add: %d",(int)(val1+val2));
	printf("\n %f",(float)123);
	
	float a = 65.00; //type promotion of int to float
	printf("\n %d",a); //1245.000000
	
	
}
