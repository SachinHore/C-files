#include<stdio.h>
struct emp
{
	int id;
	char ch;
}s1,s2,s3,s4;

int main()
{
	struct emp arr[5]= {s1,s2,s3,s4};
//	struct emp arr1[5];
//	printf("enter data for %dst obj: ",1);
//	scanf("%d",&arr1[0].id);
//	printf("enter data for %dnd obj: ",2);
//	scanf("%d",&arr1[1].id);
//	printf("enter data for %drd obj: ",3);
//	scanf("%d",&arr1[2].id);
//	printf("enter data for %dth obj: ",4);
//	scanf("%d",&arr1[3].id);
	
	printf("enter data for %dst obj: ",1);
	scanf("%d",&arr[0].id);
	printf("enter data for %dnd obj: ",2);
	scanf("%d",&arr[1].id);
	printf("enter data for %drd obj: ",3);
	scanf("%d",&arr[2].id);
	printf("enter data for %dth obj: ",4);
	scanf("%d",&arr[3].id);
	
//	printf("%d\n",arr1[0].id);
//	printf("%d\n",arr1[1].id);
//	printf("%d\n",arr1[2].id);
//	printf("%d\n",arr1[3].id);
	
	printf("%d\n",arr[0].id);
	printf("%d\n",arr[1].id);
	printf("%d\n",arr[2].id);
	printf("%d\n",arr[3].id);
	
}
