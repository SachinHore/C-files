#include<stdio.h>
struct dateofbill
{
	int date,month,year;
};

struct customer
{
	char name[40];
	int id;
	struct dateofbill dob;//nesting of struct
}c1;

int main()
{
	printf("Enter name: ");
	scanf("%s",&c1.name);
	printf("Enter id: ");
	scanf("%s",&c1.id);
	printf("Enter date: ");
	scanf("%s",&c1.dob.date);
	printf("Enter month: ");
	scanf("%d",&c1.dob.month);
	printf("Enter year:");
	scanf("%d",&c1.dob.year);
	
	printf("%s\t",c1.name);
	printf("%d\t",c1.id);
	printf("%d\t",c1.dob.date );
	printf("%d\t",c1.dob.month );
	printf("%d\t",c1.dob.year);
	
	
	return 0;
}


////
//#include<stdio.h>
//struct coustmer
//{
//	char name[40];
//	int id;
//	struct dateofbill
//	{
//		int date;
//		int month;
//		int year;
//	}dob;
//}c1;
//
//int main()
//{
//	printf("Enter name: ");
//	scanf("%s",&c1.name);
//	printf("Enter id: ");
//	scanf("%s",&c1.id);
//	printf("Enter date: ");
//	scanf("%s",&c1.dob.date);
//	printf("Enter month: ");
//	scanf("%d",&c1.dob.month);
//	printf("Enter year:");
//	scanf("%d",&c1.dob.year);
//	
//	printf("%s\t",c1.name);
//	printf("%d\t",c1.id);
//	printf("%d\t",c1.dob.date );
//	printf("%d\t",c1.dob.month );
//	printf("%d\t",c1.dob.year);
//	
//}

