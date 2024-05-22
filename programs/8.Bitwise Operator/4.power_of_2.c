#include<stdio.h>
int main(){
	int num,count=0,temp;
	printf("Enter number: ");
	scanf("%d",&num);
	temp=num;
	while(num>0){
		if((num & 1)!=0){
			count++;
		}
		num=num>>1;
	}
	if(count==1){
		printf("%d num is power of 2",temp);
	}else{
		printf("%d num is not power of 2",temp);
	}
}
