#include<stdio.h>
#include<string.h>

void main(){
	char str1[50], str2[50]; int resp;
	printf("Enter first string: "); 
	scanf("%s", str1);
	printf("Enter second string: "); 
	scanf("%s", str2);
	resp=strcmp(str1,str2);
	if(resp==0){
		printf("cotent of both are same");
		scanf("%s", str2);
		resp=strcmp(str1,str2); // u can give dire if (resp==0){ printf("cotent of both are same"); //1
	}else if(resp==1)
	{
		printf("string 1 is bigger");
	}else if(resp==-1){
		printf("string 2 is bigger");
	}

	
}
