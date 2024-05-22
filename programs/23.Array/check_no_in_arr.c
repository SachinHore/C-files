#include<stdio.h>
int main(){
	int arr[]={1,3,6,5,6,7}, flag=0, num;
	printf("enter number to check in arra: ");
	scanf("%d",&num);//6
	
	for(int i=0;i<6;i++){
		if(arr[i]==num){
			flag=1;.
			break;
		}
	}
	
	if(flag==1){
		printf("yes");
	}else{
		printf("no");
	}
}
