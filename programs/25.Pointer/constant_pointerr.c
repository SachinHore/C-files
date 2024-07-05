#include<stdio.h>
int main()
{
	int a=10,b=30;//now this pointer is constant i.e you cant change value of this pointer
	int *const ptr=&a;
	//ptr=&b;//you cant change address which is inside pointer
	*ptr=400;//but y0u can change value of pointer
//	ptr=&b;
	printf("%d",*ptr);
}
