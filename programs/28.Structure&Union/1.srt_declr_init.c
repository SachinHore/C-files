#include<stdio.h>
#include<string.h>


struct student1{
	int id;
	char ch;
	float mark;
	char name[20];
}s1,s2,s3,s4,s5,s6;////structure variable/object *first type* declaration with structure template

int main(){
	s1.id=123;
	s1.ch='y';
	s1.mark=12.34;
	strcpy(s1.name,"nikola");
	//s1.name="nikola"  not allowed in string directley cpy 
	
	s2.id=233;
	s2.ch='A';
	s2.mark=34.45;
	strcpy(s2.name,"tesla");
	
	printf("s1 id: %d\n",s1.id);
	printf("s1 ch: %d\n",s1.ch);
	printf("s1 mark: %f\n",s1.mark);
	printf("s1 name: %s\n",s1.name);// name is string so we use '%s';
	
	printf("s2 id: %d\n",s2.id);
	printf("s2 ch: %d\n",s2.ch);
	printf("s2 mark: %f\n",s2.mark);
	printf("s2 name: %s\n",s2.name);
	
}
///
//#include<stdio.h>
//#include<string.h>
//
//struct	student2{
//	int id;
//	char ch;
//	float f;
//	char name[40];
//};
//
//int main(){
//	struct student2 s1,s2,s3,s4;///// second type declaration of structure
//	s1.id=123;
//	s1.cd='y';
//	s1.f=12.34;
//	
//	//s1.name="ram";//error
//	strcpy(s1.name,"ram");
//	printf("id is %d\n char is %c \n float f is %f\n namr is %s",s1.id,s1.ch,s1.fs1.name);
//	
//	return 0;
//
///////


//#include<stdio.h>
//#include<string.h>
//
//struct student3{
//	int id;
//	char ch;
//	float f;
//	char name[40];
//};
//
//int main(){
//	////third type of declaration of structure
//	struct student3 s1={123,'w',45.76,"rupesh"},s2={.f=45.65,.name="rupesh",.ch="R",.id=335},s3;
//	
//	printf("id is: %d\n char is %c \n float f is %f \n name is %s",s1.id,s1.ch,s1.f,s1.name);
//	printf("\n\nid is: %d\n char is %c \n float f is %f \n name is %s",s2.id,s2.ch,s2.f,s2.name);
//	s3=s2;// copying s2 in s3 it is possible in structure;
//	printf("\n\nid is: %d\n char is %c \n float f is %f \n name is %s",s1.id,s1.ch,s1.f,s1.name);
//	
//	return 0;
//	
//	}


