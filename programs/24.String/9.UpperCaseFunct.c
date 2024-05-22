#include<stdio.h>
#include<string.h>

void main(){
	char name [100], city [50], ans [50], data[]="hello world"; puts ("Enter name in small case");
	gets(name);//nikola
	puts("Enter city in Upper case");
	gets(city);//PUNE
	puts("Converted name in Capital case: ");
	printf("%s\n", strupr(name));//convert string to upper case
	puts("Converted city name in Smaller case: ");
	printf("%s\n", strlwr(city));//convert string to Lower case
	
}
