//write a program in c for print area of square using function
#include <stdio.h>

// Function to calculate the area of a square
int calculateArea(int side) {
    return side * side; // Area = side × side
}

int main() {
    int side, area;

    // Input the side length of the square
    printf("Enter the side length of the square: ");
    scanf("%d", &side);

    // Call the function to calculate the area
    area = calculateArea(side);

    // Print the area of the square
    printf("The area of the square with side length %d is: %d\n", side, area);

    return 0;
}
