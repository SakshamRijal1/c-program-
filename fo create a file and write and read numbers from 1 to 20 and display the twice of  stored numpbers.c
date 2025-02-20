#include<stdio.h>

int main() {
    FILE *fptr;
    int i, numfromfile;

    fptr = fopen("test.txt", "w+");

    // Writing numbers 1 to 20 to the file
    for(i = 1; i <= 20; i++) {
        fprintf(fptr, "%d ", i);
    }

    // Rewind to the beginning of the file
    rewind(fptr);

    // Reading numbers from file, doubling them, and printing them
    while(fscanf(fptr, "%d", &numfromfile) != EOF) {
        numfromfile = 2 * numfromfile;
        printf("%d ", numfromfile);
    }

    fclose(fptr);

    return 0;
}
