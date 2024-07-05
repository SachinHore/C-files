#include<stdio.h>
//int main()
//{
//	typedef int id;
//	id num=123;
//	printf("%d\n\n",num);
//	id x=123,y=345,z=234;
//	printf("%d %d %d",x,y,z);
//	
//	typedef char name;
//	name a[]="nikola", b[]="tesla";
//	printf("\n name is %s and last name is %s",a,b);
//}

struct student{
	int a;
};
typedef struct student temp1;

// another way of using typdef with structure
typedef struct{
	int x;
}temp2;

int main()
{
	//creating structure variable using new name
	temp1 stud1,stud2;
	temp2 obj2;
	stud1.a=100;
	obj2.x=200;
	
	printf("a= %d\n",stud1.a);
	printf("x= %d\n",obj2.x);
}
