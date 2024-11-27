#include <stdio.h>

int main() {
    FILE *f1;
    f1 = fopen("integers.txt", "w+"); 
    if (f1 == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int n, x, sum = 0;

    printf("Enter number of integers to input: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &x);
        fprintf(f1, "%d\n", x); 
    }
    
    rewind(f1); // Rewind to the beginning of the file
    
    while (fscanf(f1, "%d", &x) != EOF) { // Read integers using fscanf
        sum += x;
    }
    
    fclose(f1); // Close the file before reopening it for writing

    f1 = fopen("integers.txt", "a"); // Open in append mode to add the sum
    if (f1 == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(f1, "Sum: %d\n", sum); // Write the sum to the file
    printf("Addition successful\n");
    
    fclose(f1); // Close the file
    return 0;
}
