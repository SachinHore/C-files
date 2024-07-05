#include<stdio.h>
#include <string.h>
struct point{
	int x;
	float f;
	char ch;
	char name[100];
}obj;

int main()
{
	struct point *ptr;
	ptr= &obj;// init
	ptr->x=123;// arrow operate for struct
	//accessing structure member using structure pointer
	printf("%d\n",ptr->x);
	
	ptr->f=12.34;
	printf("%f\n",ptr->f);
	
	strcpy(ptr->name,"ram");
	printf("name is : %s",ptr->name);
}
