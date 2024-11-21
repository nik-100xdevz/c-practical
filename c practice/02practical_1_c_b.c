//write a program to print astrix pattern
/*
* * *
* *
*
*/
#include <stdio.h>

int main() {
    int rows, i, j;

    // Number of rows for the pattern
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (i = rows; i >= 1; i--) {
        // Inner loop for printing asterisks
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
