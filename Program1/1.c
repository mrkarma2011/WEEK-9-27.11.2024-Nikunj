#include<stdio.h>
int main(){
    FILE *fp;
    char ch;
    char data[100];
    printf("Enter some data: ");
    fgets(data,sizeof(data),stdin);
    fp = fopen("INPUT.txt", "w+");
        
    fprintf(fp, "%s", data);
    rewind(fp);
    while ((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}
