#include<stdio.h>
#include<math.h>
int main(){
	int arr[4],size=0,i,j,sum,n;
	for(int i=0; i<10000;i++){
		
		n=i;
		size=0;
		while(n!=0){
			arr[size] = n%10;
			n=n/10;
			size++;
		}
		sum=0;
		for(j=0;j<size;j++){
			sum=sum + pow(arr[j],size);
		}
		if(sum == i){
			printf("%d\n",i);
		}
	}		
}


