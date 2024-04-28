void main(){
	char ch;
	printf("Enter alphabet:");
	scanf("%c",&ch);
	
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
		ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ){
		printf("\n%c is vowels\n",ch);
	}
	else{
		printf("\n%c is not vowels\n",ch);
	}
}
