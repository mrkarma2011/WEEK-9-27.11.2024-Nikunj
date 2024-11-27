#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f1, *f2;
    f1 = fopen("Text.txt", "r");
    
    int n;
    printf("Enter number of elements to reverse: ");
    scanf("%d", &n); // number of chars to reverse

    char *a = (char *)malloc(n * sizeof(char));
   
    int count = 0,i;
    char ch;
    while (count < n && (fscanf(f1, "%c", &ch) != EOF)) {
        a[count++] = ch; // array for those chars
    }


    // Reverse the characters
    for (i = 0; i < count / 2; i++) {
        char t = a[i]; // reversing the chars
        a[i] = a[count - 1 - i];
        a[count - 1 - i] = t;
    }
    
    f2 = fopen("temp.txt", "w"); // temp file to store output chars

    for (i = 0; i < count; i++) {
        fprintf(f2, "%c", a[i]); // printing the reversed elements
    }
	// remaining chars to temp
    while (fscanf(f1, "%c", &ch) != EOF) {
        fprintf(f2, "%c", ch); // copying chars
    }
    fclose(f1);
    fclose(f2);
    free(a); // free allocated memory

    printf("Characters reversed successfully");
    return 0;
}
