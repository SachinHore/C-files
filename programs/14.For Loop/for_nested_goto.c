#include<stdio.h>

int main(){
	for(int p=1;p<=10;p++){
		for(int k=1;k<=10;k++){
			for(int j=1;j<=10;j++){
				for(int i=1;i<=10;i++){
					
					printf("%d %d %d %d\n",p,k,j,i);
					if(i==7){
						goto nikola;
					}
					
				}
				
				
			}
		}
	}
	nikola:
	printf("\n out of");
	printf("\n After jump here");
}
