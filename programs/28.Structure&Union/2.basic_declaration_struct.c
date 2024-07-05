#include<stdio.h>
#include<string.h>

struct	student2{
	int id;
	char ch;
	float f;
	char name[40];
};

int main(){
	struct student2 s1,s2,s3,s4;///// second type declaration of structure
	s1.id=123;
	s1.ch='y';
	s1.f=12.34;
	
	//s1.name="ram";//error
	strcpy(s1.name,"ram");
	printf("id is %d\n char is %c \n float f is %f\n namr is %s",s1.id,s1.ch,s1.f,s1.name);
	
	return 0;
	
}

