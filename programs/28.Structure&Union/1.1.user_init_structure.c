#include<stdio.h>
#include<string.h>
struct customer{
	int id;
	char name[20];
};

int main()
{
	struct customer c;
	
	printf("Enter id: ");
	scanf("%d",&c.id);
	fflush(stdin);
	
	printf("Enter name: ");
	scanf("%s",&c.name);
	
	printf("id is:%d and name is %s ",c.id,c.name);
	
	return 0;
}

