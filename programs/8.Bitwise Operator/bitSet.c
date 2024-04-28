#include<stdio.h>
int main(){
	int num,pos;
	printf("Enter number");//0000 0000 0000 0000 0000 0000 0000 0000 1010
	scanf("%d",&num);
	printf("Enter position to set");
	scanf("%d",&pos);
	int temp=num | 1<<pos; //11010
	printf(" num set is : %d\n",temp);
}
