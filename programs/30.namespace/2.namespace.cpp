#include<iostream>
#include "file1.h"
#include "file2.h"


using namespace std;

int main(){
	int num1,num2,num3,num4,result;
	cout<<"enter first num: ";
	cin>>num1;
	cout<<"enter second num: ";
	cin>>num2;
	
	result = add::operation(num1,num2);
	cout<<"answer is: "<<result<<endl;
	
	result = mul::operation(num1,num2);
	cout<<"answer is: "<<result;
}
