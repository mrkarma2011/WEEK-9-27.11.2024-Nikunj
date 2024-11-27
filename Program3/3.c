#include<stdio.h>
int main(){
    FILE *f1,*f2;
    f1 = fopen("original.txt", "r");
    f2 = fopen("copy.txt", "w");
    char ch;
    while ((ch=getc(f1))!=EOF)
    {
        putc(ch,f2);
    }
    printf("Copying successful");
    fclose(f1);fclose(f2);
}
