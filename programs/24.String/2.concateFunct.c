#include<stdio.h>
#include<string.h>
void main(){
	char str1[50],str2[50];
	printf("\nEnter first string: ");
	gets(str1);//hello
	printf("\nEnter second string: \n");
	gets(str2);//jarvis
	printf("before concat str1 is : %s\n", str1);
	strcat(str1, str2);//it concat and hold data in str1 i.e. in first value
	puts(str1);
	strcat(str2, "temp");
	puts(str2); //it is used for printing just like printf func
	
}
