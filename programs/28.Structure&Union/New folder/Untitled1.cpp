#include<stdio.h>
struct emp{
	int id;
}e1,e2,e3;

int main()
{
	printf("%d\t%d\t%d\n",&e1,&e2,&e3);
	
	struct emp *arr[]={&e1,&e2,&e3};
	printf("%d\t%d\t%d\n",arr[0],arr[1],arr[2]);
	
	arr[0]->id=123;
	arr[1]->id=100;
	arr[2]->id=345;
	
	printf("%d\n",arr[0]->id);
	printf("%d\n",arr[1]->id);
	printf("%d\n",arr[2]->id);
	
	printf("%d\t%d\t%d\n",&arr[0],&arr[1],&arr[3]); // array address
	

}
