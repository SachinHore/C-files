#include<stdio.h>

int main(){
	FILE *fp,*fp1;
	char buff[50],c;
	int i=0;
	
	fp=fopen("nikolatexla,txt","r");
	
	//fscanf(fp,"%s",buff); //it stops reading after encounter first space
//	while(buff[i]!='\0'){
//		printf("%c",buff[i]);
//		i++;
//	}

//	fgets(buff,50,(FILE*)fp);//it stops reading after encounter first new line
//	while(buff[i]!='\0'){
//		printf("%c",buff[i]);
//		i++;
//	}

	while((c=fgetc(fp))!=EOF){
		printf("%c",c);
		
	}
	fclose(fp);
	
	return 0;
}
