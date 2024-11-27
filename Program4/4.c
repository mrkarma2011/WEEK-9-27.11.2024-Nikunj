#include<stdio.h>
int main(){
    FILE *f1,*f2;
    f1 = fopen("file1.txt", "r");
    f2 = fopen("file2.txt", "r");
    char ch1,ch2;
    int isEqual=1;
    while ((ch1=getc(f1))!=EOF && (ch2=getc(f2))!=EOF) {
    {
        if(ch1!=ch2){
            isEqual=0;
            break;
        }
    }}

    if ((ch1 != EOF) || (ch2 != EOF)) {
        isEqual = 0; 
    }
    
    if(!isEqual)
    printf("Not Equal");
    else
    printf("Equal");
    

fclose(f1);fclose(f2);
}
