#include<stdio.h>

int main(){
	int a=50,*ptr;
	ptr=&a;
	
	printf("\naddress of a is: %d",ptr);
	printf("\naddress of next increment id: %d",ptr+0);
	printf("\naddress of next increment id: %d",ptr+1);
	printf("\naddress of next increment id: %d",ptr+2);
	printf("\naddress of next increment id: %d",ptr-1);
	printf("\naddress of next increment id: %d",&ptr[0]);//&ptr[i]=ptr+i  //ptr[i]=*(ptr+i)
	return 0;
}
