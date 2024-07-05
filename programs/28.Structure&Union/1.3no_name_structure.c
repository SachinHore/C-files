#include<stdio.h>
struct  //without giving name of structure
{
	int id;
	char name[40];
} c1,c2,c3;//if we declare variable here then structure name is optional
int main()
{
	printf("Enter id: ");
	scanf("%d",&c1.id);
	printf("Enter name: ");
	scanf("%s,&c1.name");
	
	printf("%s\t ",c1.name);
	printf("%d\t",c1.id);
	return 0;
	
}

