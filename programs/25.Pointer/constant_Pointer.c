#include<stdio.h>
int main()
{
	const int *ptr;//or int const *ptr:Now this pointer is constant i.e you cant change value pointed by this pointer
	int a=10;
	ptr=&a;
	printf("%d",*ptr);
	//*ptr=100;//not possible to reassings
	//printf("%d",*ptr);
	
	
	int num=500;
	ptr=&num;//but you can change address to which pointer point
	printf("\n%d",*ptr);
}
