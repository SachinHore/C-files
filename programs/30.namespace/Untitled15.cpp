//character is vovel or consonat
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter char : ");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch == 'a' || ch =='i')
	{
		printf("%c it is vovale",ch);
	}else{
		printf("%c it is consonant",ch);
	}
	
}
