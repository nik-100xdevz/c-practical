//fibonacci series using in c 
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    // Input the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Handle the case for invalid input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        // Print the Fibonacci series
        printf("Fibonacci series: ");
        
        for (i = 1; i <= n; i++) {
            printf("%d ", first);  // Print the current term
            next = first + second; // Calculate the next term
            first = second;        // Update first term
            second = next;         // Update second term
        }
        printf("\n");
    }

    return 0;
}
