//write a program using for loop to factoiral of given  number in c
#include <stdio.h>

int main() {
    int number, i;
    unsigned long long factorial = 1;  // Factorial can grow large, so use unsigned long long

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using for loop
        for (i = 1; i <= number; i++) {
            factorial *= i;  // Multiply factorial by current number
        }

        // Print the result
        printf("Factorial of %d = %llu\n", number, factorial);
    }

    return 0;
}
