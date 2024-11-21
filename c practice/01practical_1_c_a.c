//write a program to print astrix pattern
#include <stdio.h>

int main(){
    int i,j,rows;

    printf("enter the number of :\n");//input from user
    scanf("%d",&rows);
    //outer loops for rows
     for (i=1; i <= rows; i++) {
        // Inner loop for printing asterisks
        for(j = 1; j<= i; j++ ) {
            printf("* ");
        }
         // Move to the next line
            printf("\n");
     }
     

    return 0;
}