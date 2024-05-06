#include<stdio.h>
void main(){
	char alpha;
	printf("Enter alphabet");
	scanf("%c",&alpha);
	
	if((alpha>='a' && alpha<='z') || (alpha>='A' && alpha<='Z')){
		printf("You have entered alphabet %c\n",alpha);
		printf("checkint for case...");
		
		if((alpha>='a' && alpha<='z')){
			printf("It is in lower case\n");
			
		}else if((alpha>='A' && alpha<='Z')){
			printf("It is in upper case\n");	
		}
	}else{
		printf("Please enter alphabet only\n");
	}
}
