#include<stdio.h>

int main(){
	char ch;
	printf("Enter character:");
	scanf("%c",ch);
	
	switch(ch>='a'&&ch<='z'){
		case 1;
			printf("You have entered in lower case");
			break;
		case 0;
			printf("You have entered in Upper case");
			break;
	}
}
