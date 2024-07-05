#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fSource, *fTarget, *fs;
	char ch,text[50];
	fSource=fopen("pp54.txt", "w");//open in write mode
	if (fSource==NULL)
	{
		printf("Cannot open file"); exit(1);
	}
	puts("Enter data: ");
	gets(text);
	fputs(text, fSource);
	puts("Data written in first file successfully...\n"); 
	fclose(fSource); //closing
	fs=fopen("pp54.txt","r"); //open in read mode 
	fTarget=fopen("p54new.txt", "w");//open in write mode
	while ((ch=fgetc(fs))!=EOF)
	{
		fputc(ch, fTarget);
	} 
	printf("file copied");
	fclose(fSource);	
	fclose(fTarget);
	return 0;
}
