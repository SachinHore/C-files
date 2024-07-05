// structure with function 
#include<stdio.h>
struct student_data 
{
	char name[20];
	int age;
	int roll;
};
void print_student_data(struct student_data a);


int main()
{
	struct student_data s1;
	int i;
	printf("data of student\n");
	printf("enter name of student\n");
    scanf("%s",s1.name);
	printf("enter the age of student\n");
	scanf("%d",&s1.age);
	printf("enter the roll number of student\n");
	scanf("%d",&s1.roll);
	
	print_student_data(s1);
}

void print_student_data(struct student_data a)
{
	printf("name of the student is %s\n",a.name );
	printf("age of the student is %d\n",a.age);
	printf("roll number of student is %d\n",a.roll);
	
}
