#include<stdio.h>
#include<string.h>

struct student3{
	int id;
	char ch;
	float f;
	char name[40];
};

int main(){
	////third type of declaration of structure
	struct student3 s1={123,'w',45.76,"rupesh"},s2={.f=45.65,.name="rupesh",.ch="R",.id=335},s3;
	
	printf("id is: %d\n char is %c \n float f is %f \n name is %s",s1.id,s1.ch,s1.f,s1.name);
	printf("\n\nid is: %d\n char is %c \n float f is %f \n name is %s",s2.id,s2.ch,s2.f,s2.name);
	s3=s2;// copying s2 in s3 it is possible in structure;
	printf("\n\nid is: %d\n char is %c \n float f is %f \n name is %s",s1.id,s1.ch,s1.f,s1.name);
	
	return 0;
	
}


