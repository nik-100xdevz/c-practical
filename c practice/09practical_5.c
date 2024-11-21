//write a program to print roll no and name of 20 student using array
#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
};

int main() {
    struct Student students[20];

    for (int i = 0; i < 20; i++) {
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].roll_no);
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", students[i].name);
    }

    printf("\nRoll No\tName\n");
    for (int i = 0; i < 20; i++) {
        printf("%d\t%s\n", students[i].roll_no, students[i].name);
    }

    return 0;
}
