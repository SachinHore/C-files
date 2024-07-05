#include<stdio.h>
#include <string.h>
struct emp
{
	int num;
	char token[20];
};

int temp(struct emp ptr)
{
	ptr->num=1000;
	strcpy(ptr->token,"temp");
}

int main()
{
	struct emp a1;
	a1.num=123;
	strcpy(a1.token,"main");
	
	temp(&a1);
	//temp(a1);
	printf("%d\n",a1.num);
	printf("%d\n",a1.token);
	
}
