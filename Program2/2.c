#include <stdio.h>

int main() {
    FILE *dataFile, *oddFile, *evenFile;
    int number,n,x;

    // Open the DATA file for reading
    dataFile = fopen("DATA", "w+");
    if (dataFile == NULL) {
        printf("Error: Could not open the file DATA for reading.\n");
        return 1;
    }
    printf("Enter number of integers to input: "); scanf("%d", &n);
    for(int i=0; i<n; i++) {
        printf("Enter integer %d: ", i+1); scanf("%d", &x);
        fprintf(dataFile, "%d\n", x);
    }


    // Open ODD and EVEN files for writing
    oddFile = fopen("ODD", "w");
    if (oddFile == NULL) {
        printf("Error: Could not open the file ODD for writing.\n");
        fclose(dataFile);
        return 1;
    }

    evenFile = fopen("EVEN", "w");
    if (evenFile == NULL) {
        printf("Error: Could not open the file EVEN for writing.\n");
        fclose(dataFile);
        fclose(oddFile);
        return 1;
    }
    rewind(dataFile); rewind(evenFile); rewind(oddFile);
    // Read numbers from DATA file and write to ODD or EVEN file
    while (fscanf(dataFile, "%d", &number) != EOF) {
        if (number % 2 == 0) {
            fprintf(evenFile, "%d\n", number);
        } else {
            fprintf(oddFile, "%d\n", number);
        }
    }

    // Close all files
    fclose(dataFile);
    fclose(oddFile);
    fclose(evenFile);

    printf("Odd and even numbers have been successfully written to ODD and EVEN files.\n");
    return 0;
}
