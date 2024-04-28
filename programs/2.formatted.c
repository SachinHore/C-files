#include<stdio.h>

int main(){
	int i;
	i=65;
	char c= 'A';
	float f = 50.5;
	
	printf("decimal valiue is %d\n",i); //printf("%d",i)
	printf("Octal value is %o\n",i);
	printf("hexadecimal value is %x \t %X\n",i,i);
	printf("float vallue is %f\n",i);
	printf("char value is %c",i);
	
	printf("decimal valiue is %d\n",c); //It will return asci value of c
	printf("Octal value is %o\n",c);
	printf("hexadecimal value is %x \t %X\n",c,c);
	printf("float vallue is %f\n",c);
	printf("char value is %c",c);
	
	printf("decimal valiue is %d\n",f); //It will return asci value of c
	printf("Octal value is %o\n",f);
	printf("hexadecimal value is %x \t %X\n",f,f);
	printf("float vallue is %f %g\n",f); //50.500000  50,5
	printf("char value is %c",f);
	
	
	return 0;
}
