//to demonstrate break using goto statement
#include <stdio.h>

int main() {
    int i = 0;

    start:
    if (i < 10) {
        printf("%d\n", i);
        i++;
        goto start;
    }

    return 0;
}
