#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4,5,6};
	char name[]="nikolo tesla";
	char *ptr1;
	int *ptr,k=0;
	ptr=arr;
	ptr1=name;
	for(int i=0;i<6;i++)
	{
		printf("%d\n",ptr[i]);
	}
	printf("\n\n");
	for(int j=0;j<6;j++)
	{
		printf("%d\n",(ptr+j));
	}
	printf("\n");
	while(*ptr1!='\0'){
		printf("%c",*ptr1);
		ptr1++;
	}
}
