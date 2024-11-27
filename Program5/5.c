#include<stdio.h>
int main(){
    FILE *f1,*f2;
    f1 = fopen("file1.txt", "a");
    f2 = fopen("file_to-be_appended.txt", "r");
    char ch;
    fseek(f1,0,2);
    while ((ch=getc(f2))!=EOF)
    {
        putc(ch,f1);
    }
    printf("Appending successful");
    fclose(f1);fclose(f2);
}
