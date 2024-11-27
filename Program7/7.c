#include<stdio.h>
int main(){
	FILE *f1,*f2;
	f1=fopen("Text.txt","r");
	char ch;
	printf("ASCII values are: \n");
	while((ch=getc(f1))!=EOF){
		printf("%d ", ch);
	}
	fclose(f1);
}
