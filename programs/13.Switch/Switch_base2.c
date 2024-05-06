#include<stdio.h>

int main(){
	char ch;
	printf("Enter charactter:");
	scanf("%c",&ch);
	
	switch(ch){
		case 'd':
			printf("CaseD");
			break;
		case 'b':
			printf("CaseB");
			break;
		case 'c':
			printf("CaseC");
			break;
		case 'z':
			printf("CaseZ");
			break;
		default:
			printf("Default");
	}
	return 0;
}
