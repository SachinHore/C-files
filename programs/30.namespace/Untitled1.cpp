#include<stdio.h>

int main(){
	int a = NULL;
	double b = 20;
	
	 
	
	int *ptra = &a;
	double *ptrb = &b;
	void *ptrc = &b;
	
	printf("ptra = %d\n",ptra);
	printf("ptrb = %d\n",ptrb);
	printf("ptrc = %d\n",ptrc);
	printf("ptra+1 = %d\n",ptra+1);
	printf("ptrb+1 = %d\n",ptrb+1);
	printf("ptrc+1 = %d\n",ptrc+2);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
//	ptra = NULL;
//	ptrb = NULL;
//	printf("ptra = %d\n",ptra);
//	printf("ptrb = %d\n",ptrb);
//	printf("ptra+1 = %d\n",ptra+1);
//	printf("ptrb+1 = %d\n",ptrb+1);
	
}
