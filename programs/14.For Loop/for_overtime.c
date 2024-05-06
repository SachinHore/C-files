/*
WAP to calculate overtime pay of 10 employee.
Overtime is paid at the rate of rs.120 per hour for every hour worked above 40 hours.
Assume that employees do not work for fractional part of an hour

*/



#include<stdio.h>

int main(){
	
	int emp=1,count,hr,ot,pay;
	printf("\n\nEnter no. of employees: \n");
	scanf("%d",&count);
	for(;emp<=count;){
		printf("\nThis is data of employee %d:",emp);
		printf("\nEnter working hour of employee %d:",emp);
		scanf("%dhr",&hr);
		if(hr>40){
			ot=hr-40;
			pay=ot*120;
			printf("\nOvertime of this employee %d : %dhr",emp,ot);
			printf("\npayment for this OT work : %dRs.\n",pay);
		}else{
			printf("this is not overtime");
		}
		
		emp++;
	}
	
	

}
